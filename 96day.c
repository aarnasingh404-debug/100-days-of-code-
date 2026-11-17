//Q146: Create Employee structure with nested Date structure for joining date and print details.


#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining;
};

int main() {
    struct Employee e;

    printf("Enter employee name, ID and salary: ");
    scanf("%s %d %f", e.name, &e.id, &e.salary);

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joining.day,
          &e.joining.month, &e.joining.year);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joining.day, e.joining.month, e.joining.year);

    return 0;
}
