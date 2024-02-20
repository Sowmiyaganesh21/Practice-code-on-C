#include<stdio.h>
int main()
{
	int val[7]={1,2,3,4,5,6,5},i;
	int num;

	printf("enter the searching element");
	scanf("%d",&num);
	for(i=0;i<=6;i++)
	{
		if(num==val[i])
			{
		printf("present\n");
		break;
	}
	}


}
