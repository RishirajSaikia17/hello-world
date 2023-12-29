#include <stdio.h>  
int main()  
{  
   int n, count=0;
   printf("Enter a number: ");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
   printf("The number of digits in an integer is %d.\n\n",count);  
   return 0;  
} 