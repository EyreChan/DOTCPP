#include<stdio.h>
int main()
{
	int i, j;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%d*%d=%-2d ", j + 1, i + 1, (j + 1)*(i + 1));
		}
		printf("\n");
	}
}
