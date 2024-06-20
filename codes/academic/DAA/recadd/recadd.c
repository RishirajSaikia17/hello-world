#include<stdio.h>

int add(int n) {
    if(n!=0)
        return n + add(n-1);
    else
        return n;
}

void main() {
    printf("Sum: %d", add(20));
}