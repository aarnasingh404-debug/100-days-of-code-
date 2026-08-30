//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int n, first, last, p = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n / p >= 10)
        p *= 10;

    first = n / p;

    n = n % p;
    n = n / 10;

    printf("After swapping: %d", last * p + n * 10 + first);

    return 0;
}
