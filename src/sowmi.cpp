#include<stdio.h>
int main()
{
	int n;
	printf("enter the n value");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0)
			printf("*");
		}
		printf("\n");
		for(int s=0;s<3;s++)
		{
			printf(" ");
		}
		
		for(int j=0;j<n;j++)
		{
			printf("*");
		}
		for(int s=0;s<3;s++)
		{
			printf(" ");
		}
			for(int j=0;j<n;j++)
		{
			printf("*");
		}
		for(int s=0;s<3;s++)
		{
			printf(" ");
		}
			for(int j=0;j<n;j++)
		{
			printf("*");
		}
		for(int s=0;s<3;s++)
		{
			printf(" ");
		}
			for(int j=0;j<n;j++)
		{
			printf("*");
		}
		for(int s=0;s<3;s++)
		{
			printf(" ");
		}
	}
}
