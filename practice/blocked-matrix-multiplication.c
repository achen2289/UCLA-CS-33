// Block/tiling Matrix Multiplication

void mmm(double* a, double* b, double* c, int N)
{
	for (int i=0; i<N; i+=B)
	{
		for (int j=0; j<N; j+=B)
		{
			for (int k=0; k<N; k+=B)
			{
				for (int i1=i; i1<i+B; i1++)
				{
					for (int j1=j; j1<j+B; j1++)
					{
						for (int k1=k; k1<k+B; k1++)
						{
							c[i1*N + j1] += a[i1*N + k1] * b[k1*N + j1];
						}
					}
				}
			}
		}
	}
}

// LA tiling problem

void transpose(int** src, int** dest, int n, int m, int B, int L)
{
	for (int i=0; i<n; i+=B)
	{
		for (int j=0; j<n; j+=B)
		{
			for (int k=0; k<n; k+=B)
			{
				for (int i1=i; i1<i+B; i1++)
				{
					for (int j1=j; j1<j+B; j1++)
					{
						for (int k1=k; k1<k+B; k1++)
						{
							
						}
					}
				}
			}
		}
	}

	for (int i=0; i<n; i+=B)
	{
		for (int j=0; j<n; j+=B)
		{
			for (int i1=i; i1<n+B && i1<n; i1++)
			{
				for (int j1=j; j1<n+B && j1<n; j1++)
				{
					dest[j1][i1+j1] = src[i1][j1];
				}
			}
		}
	}
}








