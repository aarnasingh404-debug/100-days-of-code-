//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>

int main()
{
    int n, k, i, j;
    int arr[100];
    int max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    printf("Maximum elements in each window:\n");

    // Traverse each subarray of size k
    for(i = 0; i <= n - k; i++)
    {
        max = arr[i];

        // Find maximum in current subarray
        for(j = i; j < i + k; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}