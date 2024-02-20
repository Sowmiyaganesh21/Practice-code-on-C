#include<stdio.h>
main()
{
	int i,n;
	printf("enter n value");
	scanf("%d",&n);
	printf("odd number is\n ");
	for(i=0;i<n;i++)
	{
		if(i>=51&&i<=61)
		 continue;
		if(i&1==1)
	{
		printf("%d ",i);
	}
	}
	printf("\neven number is \n");
   	for(i=0;i<n;i++)
   	{
    		if(i%2==0)
    	{
    		printf("%d ",i);
    	}
	}
}
