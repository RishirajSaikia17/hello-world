#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[50], n, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nThe sorted array is: \n\n");
    for(i=0; i<n; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n\n");
    getch();
}