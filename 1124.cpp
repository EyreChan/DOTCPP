#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	int i;
	char s[100];
	gets(s);
	for(i = 0; i < strlen(s); i++)
	{
		s[i] = tolower(s[i]);
	}
	puts(s);
	return 0;	
} 
