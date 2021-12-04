#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10], b[10][10], c[10][10], m1, n1, m2, n2, i, j;
    printf("\nEnter the rows and columns of the first matrix: ");
    scanf("%d %d", &m1, &n1);
    printf("\nEnter the elements of the first matrix: \n");
    for(i=0; i<m1; i++)
    {
        for(j=0; j<n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the rows and columns of the second matrix: ");
    scanf("%d %d", &m2, &n2);
    printf("\nEnter the elements of the second matrix: \n");
    for(i=0; i<m2; i++)
    {
        for(j=0; j<n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    if(m1 == m2 && n1 == n2)
    {
        printf("\nThe resultant matrix is: \n\n");
        for(i=0; i<m1; i++)
        {
            for(j=0; j<n1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                printf("\t%d", c[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    {
        printf("\nCannot add the two matrices as their dimensions do not match.");
    }
    getch();
}