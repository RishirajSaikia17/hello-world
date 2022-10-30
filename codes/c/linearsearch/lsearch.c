#include<stdio.h>

void main()
{
    int arr[50], n, i, key, pos, flag=0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for(i=0; i<n; i++)
    {
        if(key == arr[i])
        {
            pos = i;
            flag = 1;
            break;
        }
    }
    if(flag ==1)
    {
        printf("The element is in the list and it's position is %d\n\n", pos+1);
    }
    else
    {
        printf("The element is not found.\n\n");
    }
}