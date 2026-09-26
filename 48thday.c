//Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], temp[200];
    int i, j, n, found = 0;

    scanf("%s %s", a, b);

    n = strlen(a);

    if(n == strlen(b)) {
        for(i = 0; i < n; i++)
            temp[i] = a[i];

        for(i = 0; i < n; i++)
            temp[n + i] = a[i];

        temp[2 * n] = '\0';

        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(temp[i + j] != b[j])
                    break;
            }
            if(j == n) found = 1;
        }
    }

    if(found)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}