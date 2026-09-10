//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    int n, d, count[10] = {0}, max = 0, digit;

    scanf("%d", &n);

    while(n > 0) {
        d = n % 10;
        count[d]++;
        n = n / 10;
    }

    for(d = 0; d < 10; d++) {
        if(count[d] > max) {
            max = count[d];
            digit = d;
        }
    }

    printf("%d", digit);

    return 0;
}