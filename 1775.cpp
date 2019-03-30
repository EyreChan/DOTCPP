#include<stdio.h>
#include<math.h>
unsigned int move(unsigned int, int);
int main()
{
	unsigned int value;
	int n;
	scanf("%u %d", &value, &n);
	printf("%u", move(value, n));
	return 0;
}
unsigned int move(unsigned int value, int n)
{
	int i, j;
	if(n > 0)
	{
		for(i = 0; i < n; i++)
		{
			j = value % 2;
			value /= 2;
			if(j == 1)
			{
				value |= 0x80000000;
			}
		}
	}
	if(n < 0)
	{
		for(i = 0; i > n; i--)
		{
			j = value >> 31;
			value *= 2;
			if(j == 1)
			{
				value |= 0x00000001;
			}
		}
	}
	return value;
}
