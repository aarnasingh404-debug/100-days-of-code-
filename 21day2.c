//Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
        if(n % i == 0)
            sum += i;

    if(sum == n)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}
