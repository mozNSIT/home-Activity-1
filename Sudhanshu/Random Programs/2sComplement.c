#include <stdio.h>
int main()
{
	char A[100];
	int i, N;
	scanf("%d", &N);
	printf("%d", N);
	for(i=0; i<N; ++i)
	{
		scanf("%d",&A[i]);
	}
	for (i=0; i<N-1; ++i)
	{
		if(A[i]==1)
			A[i]=0;
		else if (A[i]==0)
		{
			A[i]=1;
		}
	}
	if(A[N-1] == 1)
		A[N-1]=0;
	else
		A[N-1]=1;
	for(i=0; i<N; ++i)
		printf("%2d ", A[i]);
	return 0;
}
