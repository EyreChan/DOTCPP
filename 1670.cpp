#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d ", n % 10);
	printf("%d ", n % 100 / 10);
	printf("%d", n / 100);
	return 0;
} 
