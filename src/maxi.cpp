#include <stdio.h>

int maxi(int num[], int size) {
    int max = num[0];
    for (int i = 1; i < size; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

int main() {
    int num[10], val;
    printf("Enter the elements");
    scanf("%d", &val);
    printf("Enter the values");
    for (int i = 0; i < val; i++) {
        scanf("%d", &num[i]);
    }
    int ans = maxi(num, val);
    printf("%d", ans);
    return 0;
}

