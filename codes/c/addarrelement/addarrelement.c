#include<stdio.h>

void main()
{
    int A[100] = {1, 2, 6, 9, 11, 13};
    int n=6, no, pos, i;
    printf("Enter the number to be added: ");
    scanf("%d", &no);
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    for(i=n-1; i>=pos; i--)
    {
        A[i+1] = A[i];
    }
    A[pos] = no;
    printf("\nThe resultant array is: ");
    for(i=0; i<=n; i++)
    {
        printf(" %d", A[i]);
    }
    printf("\n\n");
}