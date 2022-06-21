#include<stdio.h>
#include<conio.h>

int main()
{
    int *p, a = 5;
    p = &a;
    printf("%d", *p);
    getch();
    return 0;
}