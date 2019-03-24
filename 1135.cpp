#include<stdio.h>
#include<math.h>

long long item(int a, int n);

int main()
{
	int a, n, i;
	long long sum = 0;
	scanf("%d %d", &a, &n);
	for(i = 1; i <= n; i++)
	{
		sum += item(a, i);
	}
	printf("%lld", sum);
	return 0;
}

long long item(int a, int n)
{
	long long num;
	if(n == 1)
	{
		num = a;
	}
	else
	{
		num = a * pow(10, n - 1) + item(a, n-1);
	}
	return num;
}
