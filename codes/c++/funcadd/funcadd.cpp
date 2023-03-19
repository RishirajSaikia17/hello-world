#include<iostream>
using namespace std;

int add(int, int);

int main() {
    int n1, n2, sum;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    sum = add(n1, n2);
    cout<<"Sum = "<<sum;
    return 0;
}

int add(int a, int b) {
    int add;
    add = a + b;
    return add;
}