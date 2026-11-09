//Q138: Print all enum names and integer values using a loop.


#include <stdio.h>

enum Colors
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i <= GREEN; i++)
    {
        printf("%s=%d\n", names[i], i);
    }

    return 0;
}
