#include<stdio.h>

int main()
{
	int N, n, num, i, j, sum;
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &n);
		sum = 0;
		for(j = 0; j < n; j++)
		{
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n\n", sum);
	}
	return 0;	
} 
