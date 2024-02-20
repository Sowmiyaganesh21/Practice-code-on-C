#include<stdio.h>
int games(int n,int val[7])
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	if(val[i]%2==0)
	{
		printf("%d ",val[i]);
	}
	
    }
    for(int i=0;i<n;i++)
    {
	if(val[i]%2!=0)
	{
		printf("%d",val[i]);
	}
	}
	
}
int main()
{
	int n,val[7];
	games(n,val);
}
