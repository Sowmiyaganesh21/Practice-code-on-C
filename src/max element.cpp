#include<stdio.h>
#define a 20 
#define b 10 
#define c 5
int main()
{
int max=(a>b?a:b)>c?(a>b?a:b):c;
printf("%d",max);
}
