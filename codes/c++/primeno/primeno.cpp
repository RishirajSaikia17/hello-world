#include<iostream>
using namespace std;

int main() {
    int n, i;
    cout<<"Enter the number: ";
    cin>>n;
    if(n==1) {
        cout<<"The smallest prime number is 2.";
    }
    for(i=2; i<=n; i++) {
        if(n%2==0) {
            cout<<"The number is not prime.";
            break;
        }
        if(n==i) {
            cout<<"The number is prime.";
        }
    }
}