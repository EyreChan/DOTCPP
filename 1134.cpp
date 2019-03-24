#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	double n = 1, num, pi = 0;
	while(fabs(1 / n) >= 1E-6)
	{
		num = 4 * (pow(-1, i) / n);
		pi += num;
		n += 2;
		i++;
	}
	printf("%.6lf", pi);
	return 0;	
} 
