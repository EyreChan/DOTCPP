#include<stdio.h>

int main()
{
	int n = 0;
	while(1)
	{
		if((n % 8 == 1) && (n / 8 % 8 == 1) && (n / 8 / 8 % 8 == 7) && (n % 17 == 4) && (n / 17 % 17 == 15))
		{
			if(2 * (n / 8 / 8 / 8) == n / 17 / 17)
			{
				break;
			}
		}
		n++;
	}
	printf("%d", n);
	return 0;
}
