#include<stdio.h>
int main()
{
	int n;
	printf("enter the n value");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int s=0;s<i;s++)
		{
			printf(" ");
		}
		for(int j=0;j<n;j++)
		{
				if(i==0||i==n-1||j==0||j==n-1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		
		}
		printf("\n");
	}
	
}
