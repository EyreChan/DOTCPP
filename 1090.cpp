#include<stdio.h>
int main()
{
	int N, num, i, sum;
	while(scanf("%d", &N) != EOF)
	{
		sum = 0;
		for(i = 0; i < N; i++)
		{
			scanf("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return 0;	
} 
