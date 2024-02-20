#include<stdio.h>
void oddoreven(int num)
{
	
	switch(num%2)
	{
	case 0:
	        printf("even");
	                  
	case 1: 
	        printf("odd");
	        
	
	    
	}
}
int main()
{
	int num;
	printf("enter num");
	scanf("%d",&num);
	oddoreven(num);
	return 0;
}
