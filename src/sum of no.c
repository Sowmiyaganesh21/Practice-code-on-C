#include<stdio.h>
#include<conio.h>
/*
main()
{
	int val=23145,sum=0;
	while(val>0)
	{
		sum=sum+val%10;
		val=val/10;
	}
		printf("sum of the numbers is :%d",sum);
	
}*/
main()
{
	int i,val=23145, sum=0;
	for(i=val;val!=0;)
	{
		sum+=val%10;
		val=val/10;
	}
	printf("%d",sum);
}

