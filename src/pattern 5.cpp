#include<stdio.h>
int main()
{
	int n;
	printf("enter the n value");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	 for(int s=n;s>=i;s--)
	 {
	 printf(" ");	
	 }
	 for(int j=1;j<=i;j++)
		{
			if(n/2==j)
			{
				printf("?");
			}
			printf("* ");
		}
		printf("\n");
		
	}
}
