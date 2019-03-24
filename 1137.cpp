#include<stdio.h>

int f(int x);

int main()
{
	int x;
	scanf("%d", &x);
	printf("%d", f(x));
	return 0;
}

int f(int x)
{
	if(x == 1)
		return 10;
	else
		return f(x - 1) + 2;
}
