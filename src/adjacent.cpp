#include<stdio.h>
#include<stdlib.h>
int adj(int val[])
{
     int sum=0;
	for(int i=0;i<5-1;i++)
	{
		 sum+=abs(val[i+1]-val[i]);
	}
	return sum;
}
main()
{
    int val[5]={10,11,7,12,14};
   int sum=	adj(val);
	printf("%d",sum);
}
