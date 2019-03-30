#include<stdio.h>

int main()
{
	int n, i, num[100], count = 0;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		if(num[i] <= 5)
			count++;
	}
	printf("%d", count);
	return 0;
}
