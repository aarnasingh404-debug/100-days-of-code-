//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.


#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status result;

    result = SUCCESS;

    switch (result)
    {
        case SUCCESS:
            printf("Operation Successful");
            break;

        case FAILURE:
            printf("Operation Failed");
            break;

        case TIMEOUT:
            printf("Operation Timed Out");
            break;

        default:
            printf("Invalid Status");
    }

    return 0;
}
