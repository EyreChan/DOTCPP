#include<stdio.h>

int isNotRela(int n);

int main()
{
	int N, i, sum = 0;
	scanf("%d", &N);
	for(i = 1; i <= N; i++)
	{
		if(i % 2 == 0 || i / 10 % 10 == 2 || i / 100 % 10 == 2)
		{
			continue;
		}
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
