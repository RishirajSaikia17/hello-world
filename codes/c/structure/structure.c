#include<stdio.h>

struct val
{
    int a, b;
};

void main()
{
    struct val s;
    s.a = 10;
    s.b = 20;
    printf("\n%d", s.a);
    printf("\n%d", s.b);
    printf("\n\n");
}