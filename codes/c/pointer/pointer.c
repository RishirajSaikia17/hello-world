#include<stdio.h>

int main()
{
    int *p, a = 5;
    p = &a;
    printf("%d", *p);
    return 0;
}