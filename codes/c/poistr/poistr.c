#include<stdio.h>
#include<stdlib.h>

struct student
{
    int roll, marks;
};

void main()
{
    struct student *ps;
    ps->roll = 11;
    ps->marks = 72;
    printf("\nRoll no.: %d", ps->roll);
    printf("\nMarks no.: %d", ps->marks);
}