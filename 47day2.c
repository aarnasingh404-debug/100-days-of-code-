//Q94: Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char str[200], word[100], longest[100];
    int i = 0, j = 0, max = 0, len;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = j;

            if (len > max) {
                max = len;

                for (j = 0; word[j] != '\0'; j++)
                    longest[j] = word[j];

                longest[j] = '\0';
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
        i++;
    }

    printf("Longest word: %s", longest);

    return 0;
}