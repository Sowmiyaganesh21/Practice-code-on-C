#include<stdio.h>
int fac(int val)
{
	int factt=1;
	for(int i=1;i<=val;i++)
	{
		factt=factt*i;
	}
	return factt;
}
int zero(int num)
{
	int factt;
	 while(factt>0)
	{
	    num%=10;
		factt/=10;
	}
	return num;
}
int main()
{
	int val,factt=1,num;
	scanf("%d",&val);
	fac(val);
    zero(num);
	printf("%d",num);
}
