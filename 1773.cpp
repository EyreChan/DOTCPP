#include<stdio.h>
int main()
{
	unsigned int a, n, i, j;
	scanf("%u %u", &a, &n);
	for(i = 0; i < n; i++)
	{
		j = a % 2;
		a /= 2;
		if(j == 1)
		{
			a |= 0x80000000;
		}
	}
	printf("%u", a);
	return 0;	
} 
