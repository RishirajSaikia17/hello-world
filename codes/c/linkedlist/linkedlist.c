#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *start=NULL, *ptr=NULL, *curr=NULL;
void main()
{
    int i, x, n;
    printf("\nEnter the no. of nodes in the list: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        ptr = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter data: ");
        scanf("%d", &x);
        ptr -> data = x;
        ptr -> link = NULL;
        if(start == NULL)
        {
            start = ptr; curr = ptr;
        }
        else
        {
            curr -> link = ptr;
            curr = ptr;
        }
        printf("\nThe list is: ");
        ptr = start;
        while(ptr != NULL)
        {
            printf("%d ", ptr -> data);
            ptr = ptr -> link;
        }
        printf("\n\n");
    }
}