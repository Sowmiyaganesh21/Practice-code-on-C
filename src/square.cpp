#include <stdio.h>
#include <math.h>

int square(int num)
{
    int sqrtnum = (int)sqrt(num);
    return (sqrtnum * sqrtnum == num);
}

int main()
{
    int num;
    printf("enter the  count");
    scanf("%d", &num);
    int areas[15];
    for (int i = 0; i <8; i++)
	 {
        scanf("%d", &areas[i]);
    }
    int plots = 0;
    for (int i = 0; i <8; i++) {
        if (square(areas[i])) {
            plots++;
        }
    }
    
    printf("%d\n", plots);
    
    return 0;
}

