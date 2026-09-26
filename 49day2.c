//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[100];
    int i, last = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    for(i = 0; name[i] != '\0'; i++)
        if(name[i] == ' ')
            last = i + 1;

    for(i = 0; i < last; i++)
        if(i == 0 || name[i - 1] == ' ')
            printf("%c. ", name[i]);

    for(i = last; name[i] != '\0' && name[i] != '\n'; i++)
        printf("%c", name[i]);

    return 0;
}