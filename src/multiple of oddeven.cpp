#include<stdio.h>

int oddeven(int val)
{
	int sum=0,sum1=0;
	while(val>0)
	{
		int rem=val%10; 
		if(rem%2==0)
		{
			sum+=rem;
		}   
		else  
		{
			sum1+=rem;
		}
		//2514795
		val/=10;
	}
	return sum*sum1;
}
int main()
{
	int val,sum,sum1;
	scanf("%d",&val);
	printf("%d",oddeven(val));
	
	
}
