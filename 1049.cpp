#include<stdio.h>
struct date
{
	int year;
	int month;
	int day;	
}; 
int isLeap(int);
int main()
{
	int sum = 0, i;
	struct date Date;
	int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	scanf("%d %d %d", &Date.year, &Date.month, &Date.day);
	for(i = 0; i < Date.month - 1; i++)
	{
		sum += mon[i];
	}
	sum += Date.day;
	if(isLeap(Date.year))
	{
		sum += 1;
	}
	printf("%d", sum);
	return 0;
}
int isLeap(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}
