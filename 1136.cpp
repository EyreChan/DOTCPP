#include<stdio.h>

int main()
{
	int i, former, latter, num;
	for(i = 1000; i < 10000; i++)
	{
		former = i / 100;
		latter = i % 100;
		num = (former + latter) * (former + latter);
		if(num == i)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}
