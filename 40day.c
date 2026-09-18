//Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int a[3][3], i, j;

    printf("Enter matrix elements:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i + j == 2)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}