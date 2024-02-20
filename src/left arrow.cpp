#include<stdio.h>
int main()
{
	int n,l;
	printf("enter the n value");
	scanf("%d",&n);
	for(int i=-n;i<=n;i++)
	{
		if(i<0)
		l=-i;
		else
		l=i;
	
		for(int j=0;j<l+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
