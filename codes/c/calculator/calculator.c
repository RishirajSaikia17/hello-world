#include<stdio.h>

void main()
{
    int first, second, answer, remainder;
    char operator;
    printf("\nEnter operator (+, -, *, /): ");
    scanf("%c", &operator);
    if(operator != '+' && operator != '-' && operator != '*' && operator != '/')
    {
        printf("Invalid operator.");
    }
    else
    {
        printf("Enter the first number: ");
        scanf("%d", &first);
        printf("Enter the second number: ");
        scanf("%d", &second);
        switch(operator)
        {
                case'+':
                        answer = first + second;
                        printf("Sum: %d", answer);
                        break;
                case'-':
                        answer = first - second;
                        printf("Difference: %d", answer);
                        break;
                case'*':
                        answer = first * second;
                        printf("Product: %d", answer);
                        break;
                case'/':
                        answer = first / second;
                        remainder = first % second;
                        printf("Quotient: %d", answer);
                        printf("\nRemainder: %d", remainder);
                        break;
        }
    }
    printf("\n\n");
}