#include<stdio.h>

int main()
{
	int N, i, j, sum = 0, matrix;
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			scanf("%d", &matrix);
			if((i == j) || (i + j == N - 1))
			{
				sum += matrix;
			}
		}
	}
	printf("%d", sum);
	return 0;
}
