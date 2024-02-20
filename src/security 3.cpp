#include<stdio.h>
int main()
{
	int i,val=578378923,temp=0,count=0,a[15];
	int c=0;
	while(val>0)
	{
		count++;
		int rem=val%10;
		a[i]=rem;
		i++;
		val/=10;
	}
	for(int i=0;i<count;i++)
	{
		for(int j=1+i;j<count;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
	}
	if(c>0)
	{
		printf("%d",c);
	}
	else
	{
		printf("-1");
	}
}
