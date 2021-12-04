#include<stdio.h>
#include<conio.h>

void main()
{
    int arr[10][10], i, j, m, n, sum = 0;
    printf("\nEnter the number of rows and columns of the matrix: ");
    scanf("%d %d", &m, &n);
    if(m == n)
    {
        printf("\nEnter the elements: ");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        for(i=0; i<m; i++)
        {
            sum = sum + arr[i][i];
        }
        printf("\nSum of diagonal elements = %d", sum);
    }
    else
    {
        printf("\nMatrix is not square.");
    }
    getch();
}