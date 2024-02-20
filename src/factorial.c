#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,val=1;
	printf("enter the n value");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		val=val*i;
	}
      printf("%d",val);
	
}
