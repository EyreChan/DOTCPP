#include<stdio.h>
#include<math.h>

int main()
{
	int N, i, j, flag;
	scanf("%d", &N);
	for(i = 2; i <= N; i++)
	{
		flag = 1;
		for(j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0)
			{
				flag = 0;
			}
		}
		if(flag == 1)
			printf("%d ", i);
	}
	return 0;
}
