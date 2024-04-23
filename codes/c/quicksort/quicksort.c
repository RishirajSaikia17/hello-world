#include<stdio.h>

int quicksort(int A[], int l, int h) {
    int print = A[l];
    int int i = l , j = h;
    while(i>j) {
        while(A[l] <= pivot && l < h) {
            i++;
        }
        while(A[l] > pivot) {
            j--;
        }
    }
}

void swap(int a, int h) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main() {
    int n, i;
    printf("Enter the array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", arr[i]);
    }
    
}