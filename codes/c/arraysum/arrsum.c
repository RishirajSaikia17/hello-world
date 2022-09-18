#include<stdio.h>

int main()
{
    int arr[50], n, i, sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum: %d", sum);
    return 0;
}