#include <stdio.h>
int fc[10000] = {0};
int weishu = 1;
void factor(int i);
int main()
{
	int i; 
    fc[0] = 1;
    for(i = 2; i <= 1977; i++)
    {
    	factor(i);
    }
    for(i = weishu - 1; i >= 0; i--)
    {
    	printf( "%d", fc[i]);
	}
    return 0;
}
void factor(int i)
{
    int jinwei, j;
    for(j = 0; j < weishu; j++)
    {
    	fc[j] *= i;
	}
    for(j = 0; j < weishu; j++)
    {
        if(fc[j] / 10 && (j == weishu - 1))
            weishu++;
        fc[j + 1] += fc[j] / 10;
        fc[j] %= 10;
    }
}
