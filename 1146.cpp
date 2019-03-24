#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double sum = 0;
	for(i = 0; i < 64; i++)
	{
		sum += pow(2, i);
	}
	printf("%.0lf", sum);
	return 0;
}

