#include<stdio.h>
int add(int val,int val1)
{
	return val%10 + val1%10;
}
int main()
{
	int val=1234,val1=4321;
	int sum=add(val,val1);
	
	printf("%d",sum);
}
