#include<stdio.h>
int main()
{
	int n;
	printf("enter the n value");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<i+1;j++)
		{
			printf("& ");
		}
		printf("\n");
	}
	return 0;
}
