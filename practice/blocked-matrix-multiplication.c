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
			for (int i1=i; i1<i+B; i1++)
			{
				for (int j1=j; j1<j+B; j1++)
				{
					dest[j1][i1] = src[i1][j1];
					// int* src_sub = (int*)malloc(m*m*sizeof(int));
					int* dest_sub = dest[j1][i1];
					// memcpy(src_sub, dest[j1][i1], m*m*sizeof(int));
					for (int a=0; a<M; a+=L)
					{
						for (int b=0; b<M; b+=L)
						{
							for (int a1=a; a1<a+L && a1<M; a1++)
							{
								for (int b1=b; b1<b+L && b1<M; b1++)
								{
									dest[b1*M + a1] = dest_sub[a1*M + b1];
								}
							}
						}
						
					}
				}
			}
		}
	}
}








