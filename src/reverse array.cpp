#include<stdio.h>
#define n 5
int main()
{
	int arr[n];
	printf("enter the n value");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(int i=n-1;i>=0;i--)
	{
		printf(" %d",arr[i]);
}
}
