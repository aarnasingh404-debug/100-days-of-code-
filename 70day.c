//Q120: Write a program to take a string input. Change it to sentence case.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    int i = 0;

    // Convert first character to uppercase
    if (str[0] != '\0') {
        str[0] = toupper((unsigned char)str[0]);
    }

    // Convert remaining characters to lowercase
    for (i = 1; str[i] != '\0'; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }

    printf("%s", str);

    return 0;
}
