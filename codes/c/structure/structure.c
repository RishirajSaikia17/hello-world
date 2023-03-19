#include<stdio.h>

struct car {
    int num, year;
};

int main() {
    struct car a;
    a.num = 5;
    a.year = 2006;
    printf("Number = %d \nYear = %d", a.num, a.year);
    return 0;
}