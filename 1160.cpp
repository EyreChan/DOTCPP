#include<stdio.h>
#include<malloc.h>
 
int main()
{
    int n, m, count, i = 1;
    int *N;
    scanf("%d%d", &n, &m);
    N = (int *)malloc(sizeof(int) * n);
    count = n;
    while(count != 1)
    {
    	if(N[i - 1] != 0)
		{
			N[i - 1] = 0;
			count--;	
		}
		i = (i + 1) % n;
	}
	for(i = 0; i < n; i++)
	{
		if(N[i] != 0)
		{
			printf("%d", N[i]);	
		}	
	} 
    return 0;
}
