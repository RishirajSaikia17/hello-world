#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[50], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe odd numbers are:");
    for(i=0; i<n; i++)
    {
        if(arr[i] % 2 == 1)
        {
            printf("\n%d", arr[i]);
        }
    }
    getch();
}
