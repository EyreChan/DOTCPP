#include<stdio.h>
#include<math.h>

int main()
{
	long long i, t = 10;
	for(i = 0; i < 2E5; i++)
	{
		if(i >= t)
		{
			t *= 10;
		}
		if(i * i % t == i)
		{
			printf("%ld  ", i);
		}
	}
	return 0;	
} 
