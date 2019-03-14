#include<stdio.h>

int main()
{
	int num[10], i, j, sum = 0, n = 0;
	double ave_sum;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
		sum += num[i];
	}
	ave_sum = (double)sum / 10;
	for(j = 0; j < 10; j++)
	{
		if(num[j] > ave_sum)
		{
			n++;
		}
	}
	printf("%d", n);
	return 0;
}
