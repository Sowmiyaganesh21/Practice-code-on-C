#include<stdio.h>
#include<math.h>
int prime(int num)
{
	if(num<=2)
	{
		return 0;
	}
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int fno,sno;
	printf("enter the values");
	scanf("%d %d",&fno,&sno);
		if(fno>sno)
		{
			int temp=fno;
			fno=sno;
			sno=temp;
		}
		int max=0,min=0;
		for(int num=fno;num<sno;num++)
		{
			if(prime(num))
			{
				if(max==0||num>max)
				{
					max=num;
				}
				if(min==0||num<min)
				{
					min=num;
				}
			}
		}
		if(max==0)
		{
			printf("\n");
		}
		else
		{
			printf("%d",max+min);
		}
			return 0;
}
