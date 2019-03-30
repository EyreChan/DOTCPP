#include<stdio.h>

int main()
{
	int n, i, j, num[100], count = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(num[i] > num[j])
				count++;
		}
	}
	printf("%d", count);
	return 0; 
}
