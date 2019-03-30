#include<stdio.h>
#include<math.h>

unsigned int getbits(unsigned int, unsigned int, unsigned int);

int main()
{
	unsigned int value, n1, n2;
	scanf("%u %u %u", &value, &n1, &n2);
	printf("%u", getbits(value, n1, n2));
	return 0;	
} 

unsigned int getbits(unsigned int value, unsigned int n1, unsigned int n2)
{
	unsigned int i, num = 0;
	for(i = n1; i <= n2; i++)
	{
		num += pow(2, i);
	}
	return value & num;	
}
