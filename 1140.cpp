#include<stdio.h>

int main()
{
	int n = 95859, num, t;
	while(1)
	{
		n++;
		num = 0;
		t = n;
		while(t != 0)
		{
			num = 10 * num + t % 10;
			t /= 10;
		}
		
		if(num == n)
		{
			printf("%d", n);
			break;
		}
	}
	return 0;
}
