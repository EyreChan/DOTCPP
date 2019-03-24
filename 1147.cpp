#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	while(n != 1)
	{
		if(n % 2 == 0)
		{
			printf("%d/2=%d\n", n, n / 2);
			n /= 2;
		}
		else
		{
			printf("%d*3+1=%d\n", n, 3 * n + 1);
			n = 3 * n + 1;
		}
	}
	return 0;
}
