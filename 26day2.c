//Q52: Write a program to print the following pattern:

//*

//*
//*
//

//*
//*
//*

//*
//*


//*
//*
//*

//*

#include <stdio.h>

int main() {
    int i, j, n;

    for (n = 4; n >= 1; n--) {
        for (i = 1; i <= n; i++) {
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}
