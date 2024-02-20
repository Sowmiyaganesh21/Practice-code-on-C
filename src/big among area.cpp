#include<stdio.h>
area(int b,int h)
{   
  return (b*h)/2.0; 
}
int main()
{
	int b1,b2,h1,h2;
	float a1,a2;
	 scanf("%d %d %d %d",&b1,&h1,&b2,&h2);
  	if((a1=(b1*h1)/2)>(a2=(b2*h2)/2))
  		printf("%.2f",a1);
	else if((a1=(b1*h1)/2)<(a2=(b2*h2)/2))
       printf("%.2f",a2);
	
}
