#include<stdio.h>
int main()
{
	int num[10]={5,3,8,4,8,3,0,7,9,2};
	int i, l,s;  
	if(num[0]>num[1])
	{
		l=num[0];
		s=num[1];
	}
	else
	{
	s=num[0];
	l=num[1];
}

    for(i=2;i<10;i++)
{
	if(l<num[i])
	{
		s=l;
		l=num[i];
	}
	else if(s<num[i])
	{
		s=num[i];
	}
}
printf("second large %d",s);
}
