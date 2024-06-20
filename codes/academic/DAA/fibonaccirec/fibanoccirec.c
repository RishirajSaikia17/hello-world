#include<stdio.h>

int fib(int n); /* Function Prototype */

int main()
{
 int t, r;
 printf("How many terms?: ");
 scanf("%d", &t);
 for(i=1;i<=t;i++)
 {
  r = fib(i); /* Normal Function Call */
  printf(“%d\t”, r);
 }
 
 return(0);
}

int fib(int n) /* Function Definition */
{
 if(n == 1)
 {
  return(0);
 }
 else if(n == 2)
 {
  return(1);
 }
 else
 {
  return( fib(n-1) + fib(n-2) ); /* Recursive call as fib() calls itself */
 }
}