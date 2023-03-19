#include<iostream>
using namespace std;

class reverse {
    int n, r, rev=0;
    public:
    void getrev() {
        cout<<"Enter the number: ";
        cin>>n;
        while(n>0) {
            r= n%10;
            rev = rev*10 +r;
            n = n/10;
        }
        cout<<"Reverse: "<<rev;
    }
};

int main() {
    reverse a;
    a.getrev();
    return 0;
}