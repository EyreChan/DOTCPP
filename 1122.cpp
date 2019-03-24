#include<stdio.h>

int facSum(int n);
int isClosed(int i, int j);

int main()
{
	int i, j;
	for(i = 220; i < 3000; i++)
	{
		for(j = i + 1; j < 3000; j++)
		{
			if(isClosed(i, j))
				printf("(%d,%d)", i, j);
		}
	}
	return 0;
}

int facSum(int n)
{
	int sum = 0, i;
	for(i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			sum += i;	
		} 
	}
	return sum; 
}

int isClosed(int i, int j)
{
	if(facSum(i) == j && facSum(j) == i)
		return 1;
	else
		return 0;
}


