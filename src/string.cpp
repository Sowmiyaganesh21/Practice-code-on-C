#include<stdio.h>
int main()
{
char s[100];
printf("enter name");
scanf("%['\0']s",s);
printf("%s",s);
}
