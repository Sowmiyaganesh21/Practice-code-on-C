#include<stdio.h>
#define n 7
int total(int val[n])
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=val[i];
	}
	return sum;
}
int main()
{
	int sum,val[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&val[i]);
	}
	printf("%d",total(val));
}
