#include<stdio.h>
int main()
{
	int i, j, num = 1, flag, n = 0;
	while(num <= 27)
	{
		flag = 0;
		for(i = 0; i <= 4; i++)
		{
			for(j = 0; j <= 3; j++)
			{
				if(i * 3 + j * 5 == num)
				{
					flag = 1;
					n++;
					break;
				}
			}
			if(flag == 1)
				break;
		}
		num++;
	}
	printf("%d", n);
	return 0;
}
