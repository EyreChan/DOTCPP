#include<stdio.h>

long long factor(int i);

int main()
{
	int N;
	long long fc;
	scanf("%d", &N);
	fc = factor(N);
	printf("%lld", fc);
	return 0;
}

long long factor(int i)
{
	if(i == 1 || i == 0)
	{
		return 1;
	}
	else if(i >= 2)
	{
		return i * factor(i - 1);
	}
}
