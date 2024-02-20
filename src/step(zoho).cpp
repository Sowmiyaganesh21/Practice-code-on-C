#include<stdio.h>
#include<stdlib.h>

int step(int val)
{
	int diff=1;
   int i=val%10;
   val/=10;
   while(val>0)
   {
   	int j=val%10;
   	val/=10;
   	if(abs(j-i)!=1)
   	{
   		diff=0;
   		break;
	}
	i=j;
   }
   if(diff)
	{
		printf("yes");
	}
	else
	{
		printf("no");	
	}
   
}
int main()
{
	int val,diff;
    scanf("%d",&val);
	step(val);
}
