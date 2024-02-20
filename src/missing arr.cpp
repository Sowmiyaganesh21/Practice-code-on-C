#include<stdio.h>
//#define n 10
int main()
{
	int val[10]={1,2,3,4,5,6,7,9},i;

		for(i=1;i<10;i++)
		{
				int count=0;
	            for(int j=0;j<10;j++)
				{
				
			if(val[j]==i)
			 count++;
	            }
				if(count==0)
				printf("missing value is %d",i);
		}
}
