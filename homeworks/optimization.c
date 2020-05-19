
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 5.19

void psum1(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    float start = p[0];
    float temp;
    for (i = 1; i < n-1; i+=2)
    {
        p[i] = start + a[i];
        temp = start + (a[i] + a[i+1]);
        p[i+1] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum1x(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    float start = p[0];
    float temp;
    for (i = 1; i < n-1; i+=2)
    {
        p[i] = start + a[i];
        temp = start + a[i] + a[i+1];
        p[i+1] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum4(float a[], float p[], long n)
{
    long i;
    float start = p[0] = a[0];
    for (i = 1; i < n; i++)
    {
        p[i] = start + a[i];
        start = start + a[i];
    }
}

void psum3(float a[], float p[], long n)
{
    long i;
    float start = p[0] = a[0];
    float temp;
    for (i = 1; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum2(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    for (i = 1; i < n; i++)
    {
        p[i] = p[i-1] + a[i];
    }
}

void psum5(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    float start = p[0];
    float temp;
    float a0, a1, a2, a3, a4;
    for (i = 1; i < n-4; i+=5)
    {
        // pull values from memory once to improve efficiency
        a0 = a[i];
        a1 = a[i+1];
        a2 = a[i+2];
        a3 = a[i+3];
        a4 = a[i+4];

        // unroll loop (5 way)
        p[i] = start + a0;
        p[i+1] = start + a0 + a1;
        p[i+2] = start + a0 + a1 + a2;
        p[i+3] = start + a0 + a1 + a2 + a3;
        temp = start + a0 + a1 + a2 + a3 + a4;
        p[i+4] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum5x(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    float start = p[0];
    float temp;
    float a0, a1, a2, a3, a4;
    for (i = 1; i < n-4; i+=5)
    {
        // pull values from memory once to improve efficiency
        a0 = a[i];
        a1 = a[i+1];
        a2 = a[i+2];
        a3 = a[i+3];
        a4 = a[i+4];

        // unroll loop (5 way)
        p[i] = start + a0;
        p[i+1] = (start + a0) + a1;
        p[i+2] = (start + a0) + (a1 + a2);
        p[i+3] = (start + a0) + (a1 + a2) + a3;
        temp = (start + a0) + (a1 + a2) + (a3+ a4);
        p[i+4] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum5y(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    float start = p[0];
    float temp;
    float a0, a1, a2, a3, a4;
    for (i = 1; i < n-4; i+=5)
    {
        // pull values from memory once to improve efficiency
        a0 = a[i];
        a1 = a[i+1];
        a2 = a[i+2];
        a3 = a[i+3];
        a4 = a[i+4];

        // unroll loop (5 way)
        p[i] = start + a0;
        p[i+1] = start + (a0 + a1);
        p[i+2] = start + ((a0 + a1) + a2);
        p[i+3] = start + ((a0 + a1) + (a2 + a3));
        temp = start + ((a0 + a1) + (a2 + a3) + a4);
        p[i+4] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum7x(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    float start = p[0];
    float temp;
    for (i = 1; i < n-4; i+=5)
    {
        // unroll loop (5 way)
        p[i] = start + a[i];
        p[i+1] = start + a[i] + a[i+1];
        p[i+2] = start + a[i] + a[i+1] + a[i+2];
        p[i+3] = start + a[i] + a[i+1] + a[i+2] + a[i+3];
        temp = start + a[i] + a[i+1] + a[i+2] + a[i+3] + a[i+4];
        p[i+4] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum7y(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    float start = p[0];
    float temp;
    for (i = 1; i < n-4; i+=5)
    {
        // unroll loop (5 way)
        p[i] = start + a[i];
        p[i+1] = start + (a[i] + a[i+1]);
        p[i+2] = start + ((a[i] + a[i+1]) + a[i+2]);
        p[i+3] = start + ((a[i] + a[i+1]) + (a[i+2] + a[i+3]));
        temp = start + ((a[i] + a[i+1]) + (a[i+2] + a[i+3]) + a[i+4]);
        p[i+4] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum7z(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    float start = p[0];
    float temp;
    for (i = 1; i < n-4; i+=5)
    {
        // unroll loop (5 way)
        p[i] = start + a[i];
        p[i+1] = (start + a[i]) + a[i+1];
        p[i+2] = (start + a[i]) + (a[i+1] + a[i+2]);
        p[i+3] = (start + a[i]) + (a[i+1] + a[i+2]) + a[i+3];
        temp = (start + a[i]) + (a[i+1] + a[i+2]) + (a[i+3] + a[i+4]);
        p[i+4] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum6x(float a[], float p[], long n)
{
    long i;
    float start = p[0] = a[0];
    float temp;
    float a0, a1, a2;
    for (i = 1; i < n-2; i+=3)
    {
        // pull values from memory once to improve efficiency
//        a0 = a[i];
//        a1 = a[i+1];
//        a2 = a[i+2];

        // unroll loop (3 way)
        p[i] = start + a[i];
        p[i+1] = start + a[i] + a[i+1];
        temp = start + a[i] + a[i+1] + a[i+2];
        p[i+2] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum6y(float a[], float p[], long n)
{
    long i;
    float start = p[0] = a[0];
    float temp;
    float a0, a1, a2;
    for (i = 1; i < n-2; i+=3)
    {
        // pull values from memory once to improve efficiency
//        a0 = a[i];
//        a1 = a[i+1];
//        a2 = a[i+2];

        // unroll loop (3 way)
        p[i] = start + a[i];
        p[i+1] = start + (a[i] + a[i+1]);
        temp = start + ((a[i] + a[i+1]) + a[i+2]);
        p[i+2] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}

void psum6z(float a[], float p[], long n)
{
    long i;
    float start = p[0] = a[0];
    float temp;
    float a0, a1, a2;
    for (i = 1; i < n-2; i+=3)
    {
        // pull values from memory once to improve efficiency
//        a0 = a[i];
//        a1 = a[i+1];
//        a2 = a[i+2];

        // unroll loop (3 way)
        p[i] = start + a[i];
        p[i+1] = (start + a[i]) + a[i+1];
        temp = (start + a[i]) + (a[i+1] + a[i+2]);
        p[i+2] = temp;
        start = temp;
    }

    // calculate last elements of p
    for (; i < n; i++)
    {
        temp = start + a[i];
        p[i] = temp;
        start = temp;
    }
}



int main()
{
    time_t start_t, end_t, total_t;
    float a[100000];
    float p[100000];
    for (int i=0; i<1000000; i++)
    {
        a[i] = (float)(i*i*i);
    }

    start_t = time(0);
    for (int i=0; i<100000; i++)
        psum7x(a, p, 100000);
    end_t = time(0);
    total_t = ((double)(end_t - start_t));
    printf("%d\n", total_t);

    start_t = time(0);
    for (int i=0; i<100000; i++)
        psum7y(a, p, 100000);
    end_t = time(0);
    total_t = ((double)(end_t - start_t));
    printf("%d\n", total_t);
    
    start_t = time(0);
    for (int i=0; i<100000; i++)
        psum7z(a, p, 100000);
    end_t = time(0);
    total_t = ((double)(end_t - start_t));
    printf("%d\n", total_t);

//    start_t = time(0);
//    for (int i=0; i<100000; i++)
//        psum4(a, p, 100000);
//    end_t = time(0);
//    total_t = ((double)(end_t - start_t));
//    printf("%d\n", total_t);
//
//    start_t = time(0);
//    for (int i=0; i<100000; i++)
//        psum3(a, p, 100000);
//    end_t = time(0);
//    total_t = ((double)(end_t - start_t));
//    printf("%d\n", total_t);
//
//    start_t = time(0);
//    for (int i=0; i<100000; i++)
//        psum2(a, p, 100000);
//    end_t = time(0);
//    total_t = ((double)(end_t - start_t));
//    printf("%d\n", total_t);
//
//    start_t = time(0);
//    for (int i=0; i<100000; i++)
//        psum5(a, p, 100000);
//    end_t = time(0);
//    total_t = ((double)(end_t - start_t));
//    printf("%d\n", total_t);
//
//    start_t = time(0);
//    for (int i=0; i<100000; i++)
//        psum5x(a, p, 100000);
//    end_t = time(0);
//    total_t = ((double)(end_t - start_t));
//    printf("%d\n", total_t);
}
