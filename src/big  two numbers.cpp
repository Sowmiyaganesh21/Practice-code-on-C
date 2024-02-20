#include<stdio.h>

int max() 
{
	int val[8], max, min;
	scanf("%d", &val[0]);
	max = min = val[0];
	for(int i = 1; i < 8; i++)
	{
		scanf("%d", &val[i]);
		
		if(val[i] > max)
		{
			max = val[i];
		}
		if(val[i] < min)
		{
			min = val[i];
		}
	}
	
	for(int i = 0; i < 8; i++)
	{
		for(int j = i + 1; j < 8; j++)
		{
			if(val[i] > val[j])
			{
				int temp = val[i];
				val[i] = val[j];
				val[j] = temp;
			}
		}
	}
	
	int num = val[6] + val[7]; 
	return num;
}

int main()
{
	printf("%d", max());
	return 0;
}

