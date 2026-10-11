//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.


#include <stdio.h>

int main() {
    int n, k, i, sum = 0, maxSum;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter value of k: ");
    scanf("%d", &k);
    
    if (k <= 0 || k > n) {
        printf("Invalid value of k");
        return 0;
    }
    
    // Calculate sum of first window
    for (i = 0; i < k; i++) {
        sum += arr[i];
    }
    
    maxSum = sum;
    
    // Check remaining windows
    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];
        
        if (sum > maxSum) {
            maxSum = sum;
        }
    }
    
    printf("Maximum sum = %d\n", maxSum);
    
    return 0;
}