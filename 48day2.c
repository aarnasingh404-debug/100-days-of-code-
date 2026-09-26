//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char str[100], temp;
    int i, start = 0, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++) {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            end = i - 1;

            while(start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            if(str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
        }
    }

    printf("Output: %s", str);

    return 0;
}