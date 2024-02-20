#include<stdio.h>
#include<conio.h>
main()
{
	int num,large,val;
	 printf("enter the number");
	 scanf("%d",&val);
	 large=val % 10;
	
	 while(val>0)
	 {
	 num=val%10;
	 if(num>large)	
	 {
	 	large=num;
	  } 
	  val=val/10;
}
printf("%d",large);
return 0;
}
