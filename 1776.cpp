#include<stdio.h>
int main()
{
	char s[17];
	int i, k = 15;
	gets(s);
	if(s[0] == '1')
	{
		for(i = 15; i > 0; i--)
		{
			if(s[i] == '1')
			{
				k = i;
				break;
			}
		}
		for(i = k - 1; i > 0; i--)
		{
			if(s[i] == '1')
			{
				s[i] = '0';
			}
			else if(s[i] == '0')
			{
				s[i] = '1';
			}
		}
	}
	puts(s);
	return 0;	
} 
