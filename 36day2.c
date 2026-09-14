//Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int a[2][2], i, j, sum = 0;

    printf("Enter matrix elements:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}