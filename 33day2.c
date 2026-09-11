//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int a[100], n, element, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    pos = n;

    for (i = 0; i < n; i++) {
        if (a[i] > element) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = element;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}