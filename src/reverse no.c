#include<stdio.h>
#include<conio.h>
/*
main()
{
	int n=16543,rev=0;
    
    while(n>0)
{
	rev=(rev*10)+n%10;
	n=n/10;	
}
 
printf("reverse number is :%d",rev);
}
*/
main()
{
	int i,n=16543,rev=0;

	for(i=n;n!=0;)
	{
		rev=(rev*10)+n%10;
	    n=n/10;
	
   }
	printf("reverse array is %d",rev);
	}

