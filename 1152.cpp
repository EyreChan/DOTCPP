#include<stdio.h>

int main()
{
	double t = 1;
	int i, m;
	scanf("%d", &m);
	for(i = 2; i <= m; i++)
	{
		t -= (double)1 / (i * i);
	}
	printf("%.6lf", t);
	return 0;
}
