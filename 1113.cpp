#include<stdio.h>
#include<string.h> //strlen
#include<ctype.h>  //tolower
int main()
{
	char s[80], c[80];
	int i, count = 0;
	gets(s);
	for(i = 0; i < strlen(s); i++)
	{
		if(tolower(s[i]) <= 'z' && tolower(s[i]) >= 'a')
		{
			c[count] = s[i];
			count ++;
		}
	}
	puts(c);
	return 0;
}
