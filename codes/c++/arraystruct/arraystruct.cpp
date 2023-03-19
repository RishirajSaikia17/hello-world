#include<iostream>
using namespace std;

struct student {
    public:
    int roll;
    string name;
    int marks;
};

int main() {
    struct student a, b;
    cout<<"Enter roll no , name and marks of the first student: ";
    cin>>a.roll>>a.name>>a.marks;
    cout<<"Enter roll no , name and marks of the second student: ";
    cin>>b.roll>>b.name>>b.marks;
    cout<<"First student :-"<<endl;
    cout<<"Roll no.: "<<a.roll<<endl<<"Name: "<<a.name<<endl<<"Marks: "<<a.marks<<endl;
    cout<<"Second student :-"<<endl;
    cout<<"Roll no.: "<<b.roll<<endl<<"Name: "<<b.name<<endl<<"Marks: "<<b.marks<<endl;
    return 0;
}