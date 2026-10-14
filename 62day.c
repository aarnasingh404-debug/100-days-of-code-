//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.


#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int currentSum, maxSum;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    currentSum = arr[0];
    maxSum = arr[0];

    for(i = 1; i < n; i++)
    {
        if(currentSum + arr[i] > arr[i])
        {
            currentSum = currentSum + arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        if(currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
