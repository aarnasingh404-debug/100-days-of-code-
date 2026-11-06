//Q135: Assign explicit values starting from 10 and print them.


#include <stdio.h>

enum Numbers
{
    FIRST = 10,
    SECOND,
    THIRD,
    FOURTH,
    FIFTH
};

int main()
{
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);
    printf("FIFTH = %d\n", FIFTH);

    return 0;
}
