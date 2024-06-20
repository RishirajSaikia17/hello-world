#include<stdio.h>
#include<time.h>

void fibonacci(int n) {
    int first=0, second=1, next, i;
    printf("Fibonacci series: ");
    for(i=0; i<n; i++){
        printf("%d ",first);    
        next = first + second;  
        first = second;    
        second = next; 
    }
}

void main() {
    int num;
    clock_t start_time, end_time;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    start_time = clock();
    fibonacci(num);
    end_time = clock();
    double total_time = (double)(end_time - start_time)/CLOCKS_PER_SEC;
    printf("\nTime required: %d", total_time);
}