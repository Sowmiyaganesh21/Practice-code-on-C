#include <stdio.h>

int main()
 {
    int n;
    printf("Enter the n value");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || (i == j && j < n / 2) || (i + j == n - 1 && j >= n / 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

