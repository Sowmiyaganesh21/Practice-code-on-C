#include<stdio.h>
int main()
{
	int n;
	printf("enter the n value");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int s=n;s>i;s--)
		{
			printf(" ");
		}
		for(int j=0;j<=i;j++)
		{
			printf("^ ");
		}
		printf("\n");
	}
	for(int i=1;i<n;i++)
	{
		for(int s=i;s>=1;s--)
		{
			printf(" ");
		}
		for(int j=n;j>i;j--)
		{
			printf(" ^");
		}
		printf("\n");
	}
}
