#include<stdio.h>

void main()
{
    int arr[50], n, i, sum=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]%2 == 0)
            sum = sum + arr[i];
    }
    printf("Sum: %d\n", sum);
    printf("Average: %f", (float)sum/n);
}