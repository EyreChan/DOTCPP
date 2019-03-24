#include<stdio.h>

int main()
{
	int i, j, k;
	for(i = 0; i <= 20; i++)
	{
		for(j = 0; j <= 100 / 3; j++)
		{
			for(k = 0; k <= 300; k++)
			{
				if((i + j + k == 100) && (5 * i + 3 * j + (double)1 / 3 * k == 100))
				{
					printf("cock=%d,hen=%d,chicken=%d\n", i, j, k);
				}
			}
		}
	}
	return 0;	
} 
