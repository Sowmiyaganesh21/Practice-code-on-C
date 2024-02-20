#include<stdio.h>
int main()
{
	int n,m=1;
	printf("enter the n value");
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		for(int s=1;s<=i-1;s++)
		{
			printf(" ");
		}
		for(int j=1;j<=m;j++)
		{
			printf("^");
		}
		printf("\n");
		m++;
	}
}
