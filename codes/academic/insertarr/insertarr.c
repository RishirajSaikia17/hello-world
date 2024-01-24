#include<stdio.h>

void main() {
    int student[40], size, i, pos, value;
    printf("Enter no of elements in array of students: ");
    scanf("%d", &size);
    printf("Enter %d elements: ",size);

    for(i=0;i<size;i++)
        scanf("%d",&student[i]);

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the value into that poition: ");
    scanf("%d", &value);

    for(i=size-1;i>=pos-1;i--)
        student[i+1]=student[i];

    student[pos-1]= value;
    printf("Final array after inserting the value: ");

    for(i=0;i<=size;i++)
        printf("%d ", student[i]);
}