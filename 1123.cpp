#include<stdio.h>

int main()
{
	int i, j, flag;
	printf("1/40,");
	for(i = 2; i < 40; i++)
	{
		flag = 1; 
		for(j = 2; j < 40; j++)
		{
			if(40 % j == 0 && i % j == 0)
				flag = 0;
		}
		if(flag)
		{
			printf("%d/40,", i);
		}
	}
	return 0; 
} 
