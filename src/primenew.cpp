#include<stdio.h>
int main()
{
	int val;
	printf("enter the val");
	scanf("%d",&val);
	if(val==0||val==1)
	{
		printf("Hey idiot im not prime");
	}
	else
	{
		for(int i=2;i<val;i++)
		{
			if(val%i!=0)
			{
				printf("Hey babs im prime");
				break;
			}
			else
			{
				printf("Hey idiot again im not prime");
			 
			}
		}

	}
}
