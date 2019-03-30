#include<stdio.h>
#include<malloc.h>

int main()
{
	int n, num[100], i, j, k, temp;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for(i = 0; i < n; i++)
	{
		temp = num[i];
		k = i;
		for(j = i + 1; j < n; j++)
		{
			if(temp > num[j])
			{
				temp = num[j];
				k = j;
			}			
		}
		temp = num[k];
		num[k] = num[i];
		num[i] = temp;
	}
	for(i = 0; i < 3; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}
