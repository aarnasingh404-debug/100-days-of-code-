//Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int k = 2, i, j, temp;

    for (i = 0; i < k; i++) {
        temp = a[4];

        for (j = 4; j > 0; j--) {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}