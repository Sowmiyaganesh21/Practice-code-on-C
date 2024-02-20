#include<stdio.h>
int main()
{
	int num,c,val[7];
	scanf("%d %d",&num,&c);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&val[i]);
	}
	for(int i=0;i<num-1;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			if(val[i]>val[j])
			{
				int t=val[i];
				val[i]=val[j];
				val[j]=t;
			}
		}
	}
	printf("%d",val[c-1]);
	
	
}
