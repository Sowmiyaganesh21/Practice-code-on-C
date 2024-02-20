#include<stdio.h>
int main()
{
	int n,product,prices[n];
	int count=0;
	scanf("%d %d",&n,&product);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&prices[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		if((prices[i]-prices[j]==product)||(prices[j]-prices[i]==product))
		count++;
		}
	
	}
	printf("%d",count);
}
