#include<stdio.h>
int main()
{
	int n,m=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int s=m+i-1;
		for(int j=1;j<=n-i+1;j++)
		{
			printf("%d",s);
			s+=n-j+1;
		}
		printf("\n");
		m++;
	}
}
