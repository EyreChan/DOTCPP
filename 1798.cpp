#include<stdio.h>

int main()
{
	int a, b, i = 0;
	scanf("%d", &a, &b);
	while(EOF != scanf("%d%d",&a,&b))
	{
		for(i = 0; i < 5; i++)
		{
			if(a - 120 >= 0 && i < 3)
			{
				i++;
				a -= 120;
			}
			else if(a - 100 < 0 && i >= 3)
			{
				i++;
			}
			else
			{
				printf("%d", i);
				break;
			}
		}
	}
	return 0;
}
