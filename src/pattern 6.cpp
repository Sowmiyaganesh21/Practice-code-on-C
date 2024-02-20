#include<stdio.h>
int main()
{
	int n,m=1;
	printf("enter the n value");
	scanf("%d",&n);
	for(int i=1;i>=1;i++)
	{
		for(int s=n;s<=n-i;s--)
		{
			printf(" ");
		}
		for(int j=n;j>=m;j--)
		{
			printf("^");
		}
		printf("\n");
		m++;
	}
}
