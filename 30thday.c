//Q59: Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int a[100], n, i, even = 0, odd = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}