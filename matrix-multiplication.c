// Matrix Multiplication practice

// Regular matrix multiplication
// N x N matrix
// c = a x b
//
// INNER MOST LOOP MISSES:
// assume a cache block holds 32 bytes, and N > 4
// miss rate for A will be 0.25 because the first element out
// of every 4 elements will be a miss
// miss rate for B is 1 because each pull of data into the cache
// will only provide one useful data value, and the next element
// needs to be pulled from memory again
// if N=2, technically the miss rate would be 0.5 because one pull
// of 32 bytes would store two rows

void matrixMult1(int** a, int** b, int** c, int N)
{
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			int sum = 0;
			for (int k=0; k<N; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
}

// OR if the 2-D array is implemented by a 1-D array

void matrixMult1(int* a, int* b, int* c, int N)
{
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			int sum = 0;
			for (int k=0; k<N; k++)
			{
				sum += a[i*N + k] * b[k*N + j];
			}
			c[i*N + j] = sum;
		}
	}
}

// Row fixed multiplication
// INNER MOST LOOP MISSES:
// assume same previous conditions: a cache block can store 4 ints
// and one row has more than 4 ints (but still is a multiple of 4 I guess)
// a: none!
// b: 0.25, as b is now row accessed
// c: c now needs to be retrieved from memory in the inner most loop, so
// this is row wise so 0.25
// c now also needs to be wrote to memory; the compiler may do optimization
// that stores c[i][k] before writing to memory if this helps

void matrixMult2(int** a, int** b, int** c, int N)
{
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			int fixA = a[i][j];
			for (int k=0; k<N; k++)
			{
				c[i][k] += fixA * b[j][k]
			}
		}
	}
}

void matrixMult2(int* a, int* b, int* c, int N)
{
	for (int i=0; i<N; i++)
	{
		for (int j=0; j<N; j++)
		{
			int fixA = a[i*N + j];
			for (int k=0; k<N; k++)
			{
				c[i*N + k] += fixA * b[j*N + k]
			}
		}
	}
}








