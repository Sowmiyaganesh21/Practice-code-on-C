#include<stdio.h>
int main()
{
	int a[2][2]={{4,5},{2,4,}};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
}
