#include<stdio.h>
int main()
{
	int n, m, num, count, i, j, sum, ave;
	while(scanf("%d %d", &n, &m) == 2)
	{
		count = n / m;
		num = 2;
		for(i = 0; i < count; i++)
		{
			sum = 0;
			for(j = 0; j < m; j++)
			{
				sum += num;
				num += 2;
			}
			ave = sum / m;
			printf("%d ", ave);
		}
		sum = 0;
		if(n % m != 0)
		{
			for(j = 0; j < (n % m); j++)
			{
				sum += num;
				num += 2;
			}
			ave = sum / (n % m);
			printf("%d\n", ave);
		}
		else
		{
			printf("\n");
		}
	}
	return 0;	
} 
