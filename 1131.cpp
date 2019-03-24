#include<stdio.h>

int fab(int);

int main()
{
	int N, i;
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		printf("%d ", fab(i + 1));
	}
	return 0;
}

int fab(int n)
{
	int num;
	if(n == 1 || n == 2)
		num = 1;
	else 
		num = fab(n - 1) + fab(n - 2);
	return num;
}
