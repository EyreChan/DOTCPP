#include<stdio.h>
#include<math.h>
int factorial(int n); 
int main() 
{   
    int i, j, k, n, sum, num;
    for(i = 1; i <= 9; i++)     //1��9��ͷ������ 
    {
        for(j = 0; j < 5; j++)
        {
        	n = i * pow(10, j); 	//������Ϊ1��10��100��1000��10000��100000
        	for(k = n; k < (n + pow(10, j)); k++)
    		{
                sum = 0;
                num = k;
                while(num > 0)
                {
                    sum += factorial(num % 10); 
                    num /= 10;
                }
                if(sum == k) 
                {
					printf("%d ", k);
				}
            } 
        }
    }
    return 0;
}
int factorial(int n)
{
    if(n == 0 || n == 1)
    	return 1;
    else if(n >= 2)
    	return n * factorial(n - 1);
}
