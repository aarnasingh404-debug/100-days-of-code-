//Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int a[3][3], i, j, distinct = 1;

    printf("Enter matrix elements:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = i + 1; j < 3; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
            }
        }
    }

    if (distinct == 1)
        printf("Diagonal elements are distinct");
    else
        printf("Diagonal elements are not distinct");

    return 0;
}