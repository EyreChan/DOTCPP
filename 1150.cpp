#include<stdio.h>

int main()
{
	double t = 0;
	int i, n;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		t += (double)1 / i;
	}
	printf("%.6lf", t);
	return 0;
}
