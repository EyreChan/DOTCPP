#include<stdio.h>

int main()
{
	int num, max;
	scanf("%d", &num);
	max = num;
	while(num != -1)
	{
		if(num > max)
		{
			max = num;
		}
		scanf("%d", &num);
	}
	printf("%d", max);
	return 0;
}
