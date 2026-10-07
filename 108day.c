//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main()
{
    int n, i;
    int nums[100], answer[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Calculate product of elements except nums[i]
    for(i = 0; i < n; i++)
    {
        answer[i] = 1;

        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                answer[i] = answer[i] * nums[j];
            }
        }
    }

    printf("Answer array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}