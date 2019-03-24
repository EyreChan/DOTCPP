#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, flag = 1;
	scanf("%d", &n);
	for(i = 2; i < sqrt(n); i++)
	{
		if(n % i == 0)
		{
			flag = 0;
		}
		else
		{
			flag = 1;
		}
	}
	printf("%d", flag);
	return 0;
}
