//Q133: Create an enum for months and print how many days each month has.


#include <stdio.h>

enum Months
{
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main()
{
    enum Months month;
    char input[10];

    printf("Enter month (JAN to DEC): ");
    scanf("%s", input);

    switch (input[0])
    {
        case 'J':
            if (input[1] == 'A')
                month = JAN;
            else if (input[1] == 'U')
            {
                if (input[2] == 'N')
                    month = JUN;
                else
                    month = JUL;
            }
            else
                month = JAN;
            break;

        case 'F': month = FEB; break;
        case 'M':
            if (input[2] == 'R')
                month = MAR;
            else
                month = MAY;
            break;
        case 'A':
            if (input[1] == 'P')
                month = APR;
            else
                month = AUG;
            break;
        case 'S': month = SEP; break;
        case 'O': month = OCT; break;
        case 'N': month = NOV; break;
        case 'D': month = DEC; break;
        default:
            printf("Invalid month");
            return 0;
    }

    switch (month)
    {
        case JAN: case MAR: case MAY:
        case JUL: case AUG: case OCT: case DEC:
            printf("31 days");
            break;

        case APR: case JUN: case SEP: case NOV:
            printf("30 days");
            break;

        case FEB:
            printf("28 or 29 days");
            break;
    }

    return 0;
}
