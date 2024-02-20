#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("leap year");
	}
	else if(year%400==0)
	{
		printf("leap year");
	}
	else if(year%100==0)
	{
		printf("not a leap year because of century");
	}
	else 
	{
		printf("not a leapyear");
	}
}
