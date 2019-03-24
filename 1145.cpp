#include<stdio.h>
#include<math.h>

double dist(int n);

int main()
{
	int N;
	scanf("%d", &N);
	printf("%.4lf", dist(N));
	return 0;
}

double dist(int n)
{
	double d;
	if(n == 1)
		d = 100;
	else if(n == 2)
		d = 200;
	else
		d = 100 / (double)(pow(2, n - 2)) + dist(n - 1);
	return d;
}
