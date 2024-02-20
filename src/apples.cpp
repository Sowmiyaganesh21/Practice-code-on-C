#include<stdio.h>
int  apples(int n,int min)
{
	min=0;
	int qu,price;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&price,&qu);
		min+=qu*price;
	}
     printf("%d",min);
}
int main()
{
	int n,min;
	apples(n,min);
}
