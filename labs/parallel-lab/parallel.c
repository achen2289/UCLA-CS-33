//OpenMP version.  Edit and submit only this file.
/* Enter your details below
 * Name : Alex Chen
 * UCLA ID : 005299047
 * Email : achen2289@gmail.com
 */

#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

#include "utils.h"

double work_it_par(long *old, long *new, long *super, long *simple, long *fibonacci) {
  int i, j, k;
  int u, v, w;
  int ton = 0;
  long compute_it, moving_average;
  double pi, pi2, x, y, sum, step = 0.0;
  long dot_product = 0;
  long nCirc = 0;
  long aggregate = 1.0;
  double r = 1.0;
  int was_smart = 16;

  #pragma omp parallel for reduction(+:dot_product)
  for(i=0; i<DIM-1; i++)
  {
    super[i] += simple[i];
    dot_product += super[i]*simple[i];
  }

  moving_average = 0;
  #pragma omp parallel for reduction(+:moving_average)
  for(ton=DIM-2; ton<DIM-1-WINDOW_SIZE; ton++)
  {
    moving_average += simple[ton];
  }

  int a_secret = 5;
  fibonacci[0] = 1;
  fibonacci[1] = 1;
  for(i=2; i<DIM-3; i+=3)
  {
    fibonacci[i]=(fibonacci[i-1]+fibonacci[i-2]);
    fibonacci[i+1]=(fibonacci[i-1]+fibonacci[i-2])+fibonacci[i-1];
    fibonacci[i+2]=(fibonacci[i-1]+fibonacci[i-2])+(fibonacci[i-1]+	\
						    fibonacci[i-1])+fibonacci[i-2];
    if(i==2)
    {
      printf("\n A secret is: %d",obfuscate_obfuscate_obfuscate(a_secret));
    }
  }
  for (; i<DIM-1; i++)
  {
    fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
  }

  step = 1.0 / NUM_STEPS;
  #pragma omp parallel for private(x) reduction(+:sum)
  for (i=0; i<NUM_STEPS; i++)
  {
    x = (i+0.5)*step;
    sum = sum + 4.0/(1.0+x*x);
  }
  pi = step * sum;
  printf("\n %d trials, Riemann flavored pi is %f \n", NUM_STEPS, pi); 

  double r_squared = r*r;
  for(i=0;i<NUM_TRIALS; i++)
  {
    x = (random()%10000000)/10000000.0; 
    y = (random()%10000000)/10000000.0;
    if (( x*x + y*y) <= r_squared)
    {
      nCirc++;
    }
  }

  pi2 = 4.0 * ((double)nCirc/(double)NUM_TRIALS);
  printf("\n %d trials, Monte-Carlo flavored pi is %f \n", NUM_TRIALS, pi2);

  int dim2 = DIM*DIM;

  double div = (double)we_need_the_func()/(double)gimmie_the_func();
  #pragma omp parallel for reduction(+:aggregate)
  for (i=1; i<DIM-1; i++) {
    #pragma omp parallel for reduction(+:aggregate)
    for (j=1; j<DIM-1; j++) {
      #pragma omp parallel for private(compute_it) reduction(+:aggregate) 
      for (k=1; k<DIM-1; k++) {
	compute_it = old[i*dim2+j*DIM+k] * div;
        aggregate += compute_it;
      }
    }
  }

  printf("AGGR:%ld\n", aggregate);

  long temp;
  #pragma omp parallel for
  for (i=1; i<DIM-1; i++) {
    #pragma omp parallel for
    for (j=1; j<DIM-1; j++) {
      #pragma omp parallel for private(u) reduction(+:temp)
      for (k=1; k<DIM-1; k++) {
        temp = 0;
        for (u=-1; u<=1; u++) {
          temp += (old[(i+u)*dim2+(j-1)*DIM+(k-1)] + old[(i+u)*dim2+(j-1)*DIM+k] + old[(i+u)*dim2+(j-1)*DIM+(k+1)]) +
	          (old[(i+u)*dim2+j*DIM+(k-1)] + old[(i+u)*dim2+j*DIM+k] + old[(i+u)*dim2+j*DIM+(k+1)]) + 
	          (old[(i+u)*dim2+(j+1)*DIM+(k-1)] + old[(i+u)*dim2+(j+1)*DIM+k] + old[(i+u)*dim2+(j+1)*DIM+(k+1)]);
	}
        temp /= 27;
        new[i*dim2+j*DIM+k] = temp;
      }
    }
  }

  int u2;
  for (i=1; i<DIM-1; i++) {
    for (j=1; j<DIM-1; j++) {
      for (k=1; k<DIM-2; k+=2) {
	u=new[i*dim2+j*DIM+k]/100;
	if (u>=9) u=9;
	histogrammy[u]++;
	
        u2=new[i*dim2+j*DIM+k+1]/100;
	if (u2>=9) u2=9;
	histogrammy[u2]++;
      }
      for (; k<DIM-1; k++) {
	u=new[i*dim2+j*DIM+k]/100;
	if (u>=9) u=9;
	histogrammy[u]++;
      }
    }
  }

  /*
  #pragma omp parallel
  #pragma omp single
  for (i=1; i<DIM-1; i++) {
    for (j=1; j<DIM-1; j++) {
      for (k=1; k<DIM-2; k+=2) {
        #pragma omp task firstprivate(i,j,k)
	//	{
	  //        u=new[i*dim2+j*DIM+k]/100;
	//        if (u<=0) u=0;
	//	if (u>=9) u=9;
	//	#pragma omp atomic
	//	histogrammy[u]++;
	//	}
	//      }
      //    }
    //  }
    */

  return (double) (dot_product+moving_average+pi+pi2);
}
