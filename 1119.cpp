#include<stdio.h>
#include<math.h>

int main()
{
	int n, flag;
	scanf("%d", &n);
	if(pow((n / 100), 3) + pow((n / 10 % 10), 3) + pow((n % 10), 3) == n)
		flag = 1;
	else
		flag = 0;
	printf("%d", flag);
	return 0;	
} 
