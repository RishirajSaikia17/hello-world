#include<stdio.h>

int sum(int a, int b) {
    int c;
    c = a + b;
    return c;
}

void main() {
    int n1, n2;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Sum: %d", sum(n1 ,n2));
}

