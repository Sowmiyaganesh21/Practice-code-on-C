#include <stdio.h>

int main() {
	float r,h,v,cost;
	
	printf("enter the value of r,h",r,h);
	scanf("%f",&r);
		scanf("%f",&h);
	v=3.14*r*r*h;
	cost =v* 40;
	printf("%.2f",cost);
	return 0;
}

