#include<stdio.h>
int main()
{
	int num,val[8],count=0;
	printf("enter the number");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)	
    {
    	scanf("%d",&val[i]);
	}
	for(int i=1;i<=num;i++)
	{
		if(val[i]%2==0)
		{
			printf(" %d",val[i]);
		}
	}
	for(int i=1;i<=num;i++)
	{
		if(val[i]%2!=0)
		{
			printf(" %d",val[i]);
		}
	}
}
