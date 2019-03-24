#include<stdio.h>

int main()
{
	int i = 1, n, sum;
	sum = i * i * i;
	scanf("%d", &n);
	while(sum <= n)
	{
		i++;
		sum += i * i * i;
	}
	printf("%d", i - 1);
	return 0;
}
