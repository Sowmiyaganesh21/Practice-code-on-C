/*#include<stdio.h>
int main()
{ 
    int i;
	printf("enter i value");
	scanf("%d",&i);
	switch(i)
	{
		case 30 ... 50:
			printf("D");
			break;
		case 51 ... 60:
		    printf("C");
		    break;
		case 61 ... 80:
			printf("B");
			break;
		case 81 ... 100:
		    printf("A");
			break;		
			
	}
}*/
#include<stdio.h>
int main()
{
	int erp;
	printf("enter the value");
	scanf("%d",&erp);
	if(erp>=30&&erp<=50)
	{
		printf("D");
	}
	else if(erp>=51&&erp<=60)
	{
		printf("C");
	}
	else if(erp>=61&&erp<=80)
	{
		printf("B");
	 } 
	 else if(erp>=81&&erp<=100)
	 {
	 	printf("A");
	 }
}
