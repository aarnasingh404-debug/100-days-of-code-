//Q81: Count characters in a string without using built-in length functions.
#include <stdio.h>

 int main() {
    char str[100];
    int i = 0, count = 0;

     printf("Enter a string: ");
     gets(str);
      while (str[i] != '0') {
        count++;
        i++;
      }

       printf(" number of characters in the string: %d", count);
       return 0;
    
 }

