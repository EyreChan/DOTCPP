#include<stdio.h>
int main()
{
	int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0;
	int a, b, c, d, e, f;
	int num = 0;
	for(a = 0; a < 2; a++)
	{
		for(b = 0; b < 2; b++)
		{
			for(c = 0; c < 2; c++)
			{
				for(d = 0; d < 2; d++)
				{
					for(e = 0; e < 2; e++)
					{
						for(f = 0; f < 2; f++)
						{
							if(((a == 1 && b == 1) || (a == 1 && b == 0) || (a == 0 && b == 1)) && 
								((a == 1 && d == 0) || (a == 0 && d == 1) || (a == 0 && d == 0)) &&
								((a == 1 && e == 1 && f == 0) || (a == 1 && e == 0 && f == 1) || (a == 0 && e == 1 && f == 1)) &&
								((b == 1 && c == 1) || (b == 0 && c == 0)) &&
								((c == 1 && d == 0) || (c == 0 && d == 1)) &&
								((d == 1 && e == 0) || (d == 1 && e == 1) || (d == 0 && e == 0)))
							{
								if(num < (a + b + c + d + e + f))
								{
									num = a + b + c + d + e + f;
									A = a, B = b, C = c, D = d, E = e, F = f;
								}
							}
						}
					}
				}
			}
		}
	}
	if(A == 1)
		printf("A ");
	if(B == 1)
		printf("B ");
	if(C == 1)
		printf("C ");
	if(D == 1)
		printf("D ");
	if(E == 1)
		printf("E ");
	if(F == 1)
		printf("F");
	return 0;	
} 
