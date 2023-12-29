#include<stdio.h>

void matrix(int n) {
   int a[20][20], i, j;
   for(i=0; i<n; i++) {
      for(j=0; j<n; j++) {
         scanf("%d", &a[i][j]);
      }
   }

   printf("\nThe lower triangular matrix is: \n");
   for(i=0; i<n; i++) {
      for(j=0; j<n; j++) {
         if(i<j) {
            printf("%d\t", a[i][j]=0);
         }
         else {
            printf("%d\t", a[i][j]);
         }
      }
      printf("\n");
   }
}

void main() {
   int num;
   printf("Enter the size of square matrix: ");
   scanf("%d", &num);
   printf("Enter the elements of the matrix: ");
   matrix(num);
}