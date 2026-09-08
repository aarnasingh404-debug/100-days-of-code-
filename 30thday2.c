//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int a[100], n, i;
    int positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] > 0)
            positive++;
        else if (a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive = %d\n", positive);
    printf("Negative = %d\n", negative);
    printf("Zero = %d", zero);

    return 0;
}