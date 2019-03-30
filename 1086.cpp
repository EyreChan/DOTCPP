#include<stdio.h>

int main()
{
	int n, i, a, sum;
	while(scanf("%d", &n))
	{
		sum = 0;
		if(n == 0)
		{
			break;
		}
		for(i = 0; i < n; i++)
		{
			scanf("%d", &a);
			sum += a;
		}
		printf("%d\n", sum);
	}
	return 0;
}
