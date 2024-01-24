#include<stdio.h>

void main() {
    int n, a, b;
    printf("Enter a four digit number: ");
    scanf("%d", &n);
    a = n / 1000;
    b = n % 10;
    printf("Sum of first and last digit: %d", a+b);
}