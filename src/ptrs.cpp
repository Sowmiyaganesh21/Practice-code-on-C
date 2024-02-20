#include<stdio.h>
int main ()
{
	 int x=1,q;
	 int *p=&x;
	   q=p;
	 *q=5;
	 printf("%d",*p);
	 }
