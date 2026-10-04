//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

int main() {
    int n, count, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < n; i++) {
        count = 0;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j])
                count++;
        }

        if (count > n / 2) {
            printf("Majority element: %d", nums[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("-1");

    return 0;
}