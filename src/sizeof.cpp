#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,0,7,6,4,4,3,2,1,4,5,6,7};
	printf("%d",sizeof(arr)/sizeof(arr[0]));
}
