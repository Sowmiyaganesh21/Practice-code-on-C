#include <stdio.h>

int main() {
	char n;
	int y,c;
	printf("enter the name");
	scanf("%s",&n);
	printf("age");
	scanf("%d",&y);
	c=2023-y;
	printf("Happy Birthday %s ! Your current age is %d",n,c);
	return 0;
}

