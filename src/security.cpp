#include <stdio.h>


int main() {
  int num[10] = {5,7,8,3,7,8,9,2,3},count=0;
  int digit[10]={0};
  for(int i=0;i<10;i++)
  {
  	int val=num[i];
  	digit[val]++;
  }
  for(int i=0;i<10;i++)
  {
  	if(digit[i]>1)
  	{
  		count++;
	  }
}
if(count>0)
{
	printf("%d",count);
}
else
{
	printf("-1");
}
}
