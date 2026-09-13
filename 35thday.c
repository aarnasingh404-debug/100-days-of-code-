//Q69: Find the second largest element in an array.

#include <stdio.h>

int main() {
    int a[5] = {10, 25, 5, 40, 30};
    int i, largest, second;

    largest = second = a[0];

    for (i = 1; i < 5; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    printf("Second largest = %d", second);

    return 0;
}