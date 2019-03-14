#include<stdio.h>
#include<math.h>
int isprime(int);
int main()
{
	int m, n, i, sum = 0;
	scanf("%d %d", &m, &n);
	for(i = m; i <= n; i++)
	{
		if(isprime(i))
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}
int isprime(int n)
{
	int i;
	if(n == 1)
		return 0;
	else if(n == 2)
		return 1;
	for(i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}
