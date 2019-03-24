#include<stdio.h>

int main()
{
	int N[4], i, j, temp;
	scanf("%d %d %d %d", &N[0], &N[1], &N[2], &N[3]);
	for(i = 0; i < 4; i++)
	{
		temp = N[i];
		for(j = i + 1; j < 4; j++)
		{
			if(N[j] < temp)
			{
				temp = N[j];
				N[j] = N[i];
				N[i] = temp;
			}
		}
	}
	printf("%d %d %d %d", N[0], N[1], N[2], N[3]);
	return 0;	
} 
