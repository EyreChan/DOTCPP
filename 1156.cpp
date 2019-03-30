#include<stdio.h>
#include<math.h>

int main()
{
	int n, num, sum;
	for(n = 2; n < 1000; n++)
	{
		num = n;
		sum = 0;
		while(num > 0)
		{
			sum += pow(num % 10, 3);
			num /= 10;
		}
		if(sum == n)
			printf("%d  ", n);
	}
	return 0;
}
