//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.


#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    // Open file in write mode
    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Store student records
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("\nStudent Records:\n");

    // Read and display records
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3)
    {
        printf("\nName: %s", name);
        printf("\nRoll Number: %d", roll);
        printf("\nMarks: %.2f\n", marks);
    }

    fclose(fp);

    return 0;
}
