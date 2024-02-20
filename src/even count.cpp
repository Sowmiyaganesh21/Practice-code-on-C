#include<stdio.h>
even()
{
	int val,val1,val2,val3, val4;
	int num[10]={val,val1,val2,val3,val4},c=0;
	for(int i=0;i<num[i];i++)
	{
		if(num[i]%2==0)
		{
			c++;
		}
	}
	return c;
}

int main()
{
	int val=10,val1=15,val2=20,val3=25,val4=30;
	int dig = even();
	printf("%d",dig);
}
