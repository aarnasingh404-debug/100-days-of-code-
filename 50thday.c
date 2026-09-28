//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    char date[20];

    printf("Enter date (dd/04/yyyy): ");
    scanf("%s", date);

    printf("New date format: %.2s-Apr-%.4s", date, date + 6);

    return 0;
}