#include<stdio.h>
#include<math.h> 
int main()
{
	int N, min, mult, i;
	scanf("%d", &N);
	min = pow(N - 1, 2) + N;
	mult = pow(N, 3);
	printf("%d*%d*%d=%d=", N, N, N, mult);
	for(i = 0; i < N - 1; i++)
	{
		printf("%d+", min);
		min += 2;
	}
	printf("%d", min);
	return 0;	
} 
