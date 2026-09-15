//Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int a[2][2], sum[2] = {0};
    int i, j;

    printf("Enter matrix elements:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Row sums:\n");

    for (i = 0; i < 2; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}