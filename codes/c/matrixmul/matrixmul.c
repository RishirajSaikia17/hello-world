#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10][10], b[10][10], c[10][10], m1, n1, m2, n2, i, j, k, sum=0;
    //enter rows and columns and scan the elements of first matrix
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
    //enter rows and columns and scan the elements of second matrix
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

    if(n1 == m2) //scan the elements of the resultant matrix
    {
        for(i=0; i<m1; i++)
        {
            for(j=0; j<n2; j++)
            {
                for(k=0; k<n1; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                c[i][j] = sum;
                sum=0;
            }
        }
        printf("\nResultant matrix: \n\n");
        for(i=0; i<m1; i++)
        {
            for(j=0; j<n2; j++)
            {
                printf("\t%d", c[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    {
        printf("\nCannot multiply the two matrices as columns of first matrix do not match rows of second matrix: ");
    }
    getch();
}