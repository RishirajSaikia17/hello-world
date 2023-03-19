#include<iostream>
using namespace std;

int main() {
    int n, i, fect=1;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1; i<=n; i++) {
        fect = fect * i;
    }
    cout<<"Factorial: "<<fect;
    return 0;
}