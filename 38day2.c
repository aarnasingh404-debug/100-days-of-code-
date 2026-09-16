//Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int a[2][2], i, j, symmetric = 1;

    printf("Enter matrix elements:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
            }
        }
    }

    if (symmetric == 1)
        printf("Matrix is symmetric");
    else
        printf("Matrix is not symmetric");

    return 0;
}