#include<stdio.h>
#include<conio.h>

void main() {

   int arr[10], i, n, j, p;
   printf("Enter the number of elements of the array: ");
   scanf("%d", &n);
   printf("\nEnter the elements of the array: \n");
   for (i = 0; i < n; i++)
   {
       scanf("%d", &arr[i]);
   }
   printf("\nAll prime list is: \n");
   for (i = 0; i < n; i++)
   {
       j = 2;
       p = 1;
       while (j < arr[i])
       {
           if (arr[i] % j == 0)
           {
               p = 0;
               break;
           }
           j++;
       }
       if (p == 1)
       {
           printf("%d ", arr[i]);
       }
   }
   getch();
}