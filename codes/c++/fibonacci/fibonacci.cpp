#include<iostream>
using namespace std;

int main() {
    int n, i=0, first=0, second=1, next;
    cout<<"Enter number of terms: ";
    cin>>n;
    do {
        cout<<first<<" ";
        next = first + second;
        first = second;
        second = next;
        i++;
    } while(i<n);
    return 0;
}