#include<stdio.h>

void main()
{
    int A[100] = {1, 2, 3, 4, 5, 6};
    int n=6, pos, i;
    printf("Delete element from position: ");
    scanf("%d", &pos);
    if(pos>n)
    {
        printf("\nDeletion not possible.");
    }
    else
    {
        for(i=pos-1; i<n-1; i++)
        {
            A[i] = A[i+1];
        }
        printf("\nThe resultant array is: ");
        for(i=0; i<n-1; i++)
        {
            printf(" %d", A[i]);
        }
    }
    printf("\n\n");
}