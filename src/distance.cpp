#include<stdio.h>
int distance(int n,int val[5])
{
	int i,strt,end;
	printf("enter the count");
	scanf("%d",&n);
	printf("enter the start range");
	scanf("%d",&strt);
	printf("enter the end range");
	scanf("%d",&end);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	
	if(val[i]>=strt && val[i]<=end)
	{
		printf("%d ",val[i]);
    }
}
}
int main()
{
	int val[5],n;
	distance(n,val);
}
