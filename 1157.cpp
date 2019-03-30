#include<stdio.h>
#include<malloc.h>
int factorSum(int n);
int main()
{
	int N, i;
	int *num1, *num2;
	num1 = (int *)malloc(sizeof(int) * N);
	num2 = (int *)malloc(sizeof(int) * N);
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &num1[i], &num2[i]);
	}
	for(i = 0; i < N; i++)
	{
		if(factorSum(num1[i]) == num2[i] || factorSum(num2[i]) == num1[i])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		} 
	}
	return 0;
}
int factorSum(int n)
{
	int i, sum = 0;
	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
