#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n, i, *p;
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    p = (int*) malloc(n * sizeof(int));
    printf("\nEnter the elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\nThe array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n\n");
    free(p);
}