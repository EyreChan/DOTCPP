#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char s[50];
	int n = 0, i;
	gets(s);
	for(i = 0; i < strlen(s); i++)
	{
		s[i] = tolower(s[i]);
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			n++;
		}
	}
	printf("%d", n);
	return 0;
}
