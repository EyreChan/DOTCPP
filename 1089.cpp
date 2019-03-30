#include<stdio.h>

int main() 
{
	int N, i, j, n, sum, num;
	scanf("%d", &N); 
	for(i = 0; i < N; i++)
	{
		sum = 0;
		scanf("%d", &n);
		for(j = 0; j < n; j++)
		{
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return 0;
}
