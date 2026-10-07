//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main()
{
    int n, k, i;
    int arr[100];
    int sum = 0, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // Calculate sum of first k elements
    for(i = 0; i < k; i++)
    {
        sum = sum + arr[i];
    }

    maxSum = sum;

    // Sliding window
    for(i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d", maxSum);

    return 0;
}