#include <stdio.h>

int main() {
	int n;
	int n1,n2;
	printf("enter the value of ",n,n1,n2);
	scanf("%d%d%d",&n,&n1,&n2);
	if(n%2==0)
		printf("WON");
		else if(n1%2==0)
			printf("WON");
			else if(n2%2==0)
				printf("WON");
	else
		printf("LOSS");
	return 0;
}

