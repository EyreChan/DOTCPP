#include<stdio.h>

long fac(int n);

int main()
{
	int n, i;
	long sum = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		sum += fac(i);
	}
	printf("%ld", sum);
	return 0;
}

long fac(int n)
{
	if(n == 1)
		return 1;
	else if(n >= 1)
		return n * fac(n - 1);
}
