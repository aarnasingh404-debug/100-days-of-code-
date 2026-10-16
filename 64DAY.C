// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j, k, len;
    int count, maxLen = 0, repeated;

    scanf("%999s", s);

    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        count = 0;

        for (j = i; j < len; j++)
        {
            repeated = 0;

            for (k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeated = 1;
                    break;
                }
            }

            if (repeated == 1)
            {
                break;
            }

            count++;
        }

        if (count > maxLen)
        {
            maxLen = count;
        }
    }

    printf("%d\n", maxLen);

    return 0;
}
