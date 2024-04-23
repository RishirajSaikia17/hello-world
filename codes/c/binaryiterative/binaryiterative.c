#include<stdio.h>

int main() {
    int arr[10] = {5, 7, 9, 12, 15, 17};
    int left, right, mid, target, len, i;
    len = sizeof(arr);
    right = len - 1;
    while(left <= right) {
        mid = (left + right)/2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    printf("");
    return 0;
}