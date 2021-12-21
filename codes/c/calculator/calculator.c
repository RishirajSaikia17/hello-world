#include<stdio.h>
#include<conio.h>

void main()
{
    int first, second, answer, remainder;
    char operator;
    printf("Operators: (+) (-) (*) (/)");
    printf("\nEnter operator: ");
    operator = getchar();
    if(operator != '+' && operator != '-' && operator != '*' && operator != '/')
    {
        printf("Invalid operator.");
    }
    else
    {
        printf("\nEnter the first number: ");
        scanf("%d", &first);
        printf("\nEnter the second number: ");
        scanf("%d", &second);
        switch(operator)
        {
                case'+':
                        answer = first + second;
                        printf("\nSum: %d\n", answer);
                        break;
                case'-':
                        answer = first - second;
                        printf("\nDifference: %d\n", answer);
                        break;
                case'*':
                        answer = first * second;
                        printf("\nProduct: %d\n", answer);
                        break;
                case'/':
                        answer = first / second;
                        remainder = first % second;
                        printf("\nQuotient: %d", answer);
                        printf("\nRemainder: %d\n", remainder);
                        break;
        }
    }
    getch();
}