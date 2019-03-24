#include<stdio.h>

int main()
{
	int N[10], i, j, temp;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &N[i]);
	}
	for(i = 0; i < 10; i++)
	{
		temp = N[i];
		for(j = i + 1; j < 10; j++)
		{
			if(N[j] > temp)
			{
				temp = N[j];
				N[j] = N[i];
				N[i] = temp;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", N[i]);
	}
	return 0;	
} 
