#include<stdio.h>
int leaders(int val[6],int n)
{
	int j;
	for(int  i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(val[i]<=val[j])
			{
				break;
			}
		}
		if(j==n)
		{
			printf(" %d",val[i]);
		}
	}
}
int main()
{
	int val[6],n;
	n=sizeof(val)/sizeof(val[0]);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	}
	leaders(val,n);
}
