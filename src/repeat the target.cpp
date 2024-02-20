#include <stdio.h>

int repeated(int num, int val) {
    int count = 0;
    int temp = num;
    
    while (temp > 0) {
        int digit = temp % 10;
        if (digit == val) {
            count++;
        }
        temp /= 10;
    }
    
    return count;
}

int main() {
    int num=572378233, val;
    printf("digit to count");
    scanf("%d", &val);

    int digit = repeated(num,val);

    printf("%d", val,digit);

    return 0;
}

