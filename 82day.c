//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.


#include <stdio.h>

enum Traffic
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    enum Traffic light;

    light = RED;

    if (light == RED)
    {
        printf("Stop");
    }
    else if (light == YELLOW)
    {
        printf("Wait");
    }
    else if (light == GREEN)
    {
        printf("Go");
    }

    return 0;
}
