#include<stdio.h>
#include<string.h>

int main()
{
	char s[50];
	int i;
	gets(s);
	for(i = 0; i < strlen(s); i++)
	{
		putchar(s[i]);
	}
	for(i = strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	return 0;
}
