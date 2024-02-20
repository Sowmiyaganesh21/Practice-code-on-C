#include<stdio.h>
int main()
{
	int val[10]={5,7,8,3,7,8,9,2,3},count=0;
	int temp;
	for(int i=0;i<10;i++)
	{
		int pre=0;
		{
			for(int j=1+i;j<10;j++)
			{
				if(val[i]==val[j])
				{
					count++;
				}
			}
			if(pre>count)
			{
				temp=val[i];
				count=pre;
			}
		}
	}
	printf("%d",temp);
}
