#include <stdio.h>

int main() {
	float p,r,t;
	float interest;
    printf("enter hte valuse of p ,t,r",p,t,r);
     scanf("%f",&r);
    scanf("%f",&t);
      scanf("%f",&p);
	interest=(p*r*t)/100;
	printf("%f",interest);
	
	return 0;
}

