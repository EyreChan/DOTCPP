#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	n = (n >> 4) & 15;
	printf("%d", n);
	return 0;	
} 
