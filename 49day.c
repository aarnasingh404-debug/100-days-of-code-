//Q97: Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    for(i = 0; name[i] != '\0'; i++) {
        if(i == 0 || name[i - 1] == ' ')
            printf("%c", name[i]);
    }

    return 0;
}