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
  
  long dot_product2 = 0;
  #pragma omp parallel for reduction(+:dot_product,dot_product2) lastprivate(i)
  for (i=0; i<DIM-2; i+=2)
  {
    super[i] += simple[i];
    dot_product += super[i]*simple[i];
    super[i+1] += simple[i+1];
    dot_product2 += super[i+1]*simple[i+1];
  }
  dot_product += dot_product2;
  
  for (; i<DIM-1; i++)
  {
    super[i] += simple[i];
    dot_product += super[i]*simple[i];
  }

  moving_average = 0;
  long moving_average2 = 0, moving_average3 = 0;
    for (ton=DIM-2; ton<DIM-1-WINDOW_SIZE-3; ton+=3)
  {
    moving_average += simple[ton];
    moving_average2 += simple[ton+1];
    moving_average3 += simple[ton+2];
  }
  moving_average += moving_average2 + moving_average3;

  for (; ton<DIM-1-WINDOW_SIZE; ton++)
  {
    moving_average += simple[ton];
  }

  int a_secret = 5;
  fibonacci[0] = 1;
  fibonacci[1] = 1;
  if (DIM >= 6) // only print if i reaches 3
    printf("\n A secret is: %d", obfuscate_obfuscate_obfuscate(a_secret));
  for (i=2; i<DIM-3; i+=3)
  {
    fibonacci[i] = (fibonacci[i-1]+fibonacci[i-2]);
    fibonacci[i+1] = (fibonacci[i-1]+fibonacci[i-2])+fibonacci[i-1];
    fibonacci[i+2] = (fibonacci[i-1]+fibonacci[i-2])+(fibonacci[i-1]+	\
						    fibonacci[i-1])+fibonacci[i-2];
  }
  for (; i<DIM-1; i++)
  {
    fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
  }

  step = 1.0 / NUM_STEPS;
  #pragma omp parallel for private(x) reduction(+:sum)
  for (i=0; i<NUM_STEPS; i++)
  {
    x = (i+0.5) * step;
    sum += 4.0 / (1.0+x*x);
  }
  pi = step * sum;
  printf("\n %d trials, Riemann flavored pi is %f \n", NUM_STEPS, pi); 

  double r_squared = r*r;
  //  double x2, y2;
  for(i=0; i<NUM_TRIALS; i++)
  {
    x = (random()%10000000) / 10000000.0; 
    y = (random()%10000000) / 10000000.0;
    if ((x*x + y*y) <= r_squared)
      nCirc++;
  }

  pi2 = 4.0 * ((double)nCirc/(double)NUM_TRIALS);
  printf("\n %d trials, Monte-Carlo flavored pi is %f \n", NUM_TRIALS, pi2);

  int dim2 = DIM * DIM;
   
  double div = (double)we_need_the_func() / (double)gimmie_the_func();
  long temp;
  int o0=0, o1=0, o2=0, o3=0, o4=0, o5=0, o6=0, o7=0, o8=0, o9=0;
  #pragma omp parallel for reduction(+:aggregate,o0,o1,o2,o3,o4,o5,o6,o7,o8,o9)
  for (i=1; i<DIM-1; i++) {
    #pragma omp parallel for reduction(+:aggregate,o0,o1,o2,o3,o4,o5,o6,o7,o8,o9)
    for (j=1; j<DIM-1; j++) {
      int index = i * dim2 + j * DIM;
      #pragma omp parallel for private(compute_it,u) reduction(+:aggregate,temp,o0,o1,o2,o3,o4,o5,o6,o7,o8,o9)
      for (k=1; k<DIM-1; k++) {
	compute_it = old[index+k] * div;
	aggregate += compute_it;
	
        temp = 0;
        for (u=-1; u<=1; u++) {
          temp += (old[(i+u)*dim2+(j-1)*DIM+(k-1)] + old[(i+u)*dim2+(j-1)*DIM+k] + old[(i+u)*dim2+(j-1)*DIM+(k+1)]) +
	          (old[(i+u)*dim2+j*DIM+(k-1)] + old[(i+u)*dim2+j*DIM+k] + old[(i+u)*dim2+j*DIM+(k+1)]) + 
	          (old[(i+u)*dim2+(j+1)*DIM+(k-1)] + old[(i+u)*dim2+(j+1)*DIM+k] + old[(i+u)*dim2+(j+1)*DIM+(k+1)]);
	}
        temp /= 27;
        new[index+k] = temp;

	u=temp/100;
        if (u==0) o0++;
        if (u==1) o1++;
        if (u==2) o2++;
        if (u==3) o3++;
        if (u==4) o4++;
        if (u==5) o5++;
        if (u==6) o6++;
        if (u==7) o7++;
        if (u==8) o8++;
        if (u>=9) o9++;
      }
    }
  }

  printf("AGGR:%ld\n", aggregate);

  histogrammy[0] += o0;
  histogrammy[1] += o1;
  histogrammy[2] += o2;
  histogrammy[3] += o3;
  histogrammy[4] += o4;
  histogrammy[5] += o5;
  histogrammy[6] += o6;
  histogrammy[7] += o7;
  histogrammy[8] += o8;
  histogrammy[9] += o9;
  
  return (double) (dot_product+moving_average+pi+pi2);
}
