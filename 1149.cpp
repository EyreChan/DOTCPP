#include<stdio.h>

int main()
{
	int N, i;
	long sum = 0;
	scanf("%d", &N);
	for(i = 1; i <= N; i++)
	{
		if(i % 2 != 0)
		{
			sum += i;
		}
	}
	printf("%ld", sum);
	return 0;
}
