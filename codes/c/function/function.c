#include<stdio.h>

int sum(int a, int b) {
    int c;
    c = a + b;
    return c;
}

void main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Sum: %d", sum(n1 ,n2));
}

