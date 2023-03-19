#include<iostream>
using namespace std;

class student {
    public:
    string name;
    int roll;
    int marks;
};

int main() {
    student a;
    cout<<"Enter name, roll no. and marks of the student: ";
    cin>>a.name>>a.roll>>a.marks;
    cout<<"Name: "<<a.name;
    cout<<"Roll no.: "<<a.roll;
    
}