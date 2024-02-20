#include<stdio.h>
int multiple(int num,int num1)
{
	if(num==0 && num1==0)
	{
		return 3;
	}
	if(num1>=0)
	{
		if(num%num==0)
		{
				return 2;
		}
	
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num=21,num1=14;
	int ismultiple= multiple(num,num1);
	printf("%d",ismultiple);
}
