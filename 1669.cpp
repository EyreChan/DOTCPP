#include<stdio.h>
#define PI 3.1415926

int main()
{
	double r, area;
	scanf("%lf", &r);
	area = PI * r * r;
	printf("%.2lf", area);
	return 0;
} 
