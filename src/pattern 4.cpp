#include<stdio.h>
int main()
{
	int n,m=1;
	printf("enter the n value");
	scanf("%d",&n);
    for(int i=1;i<=n;i++)
	{
      for(int s=n;s>=n-i;s--)
	  {
	  	printf(" ");
	 }	
	 for(int k=n;k>=m;k--)
	 {
	 	printf("^");
	 }
	 printf("\n");
	 m++;
	}
}
