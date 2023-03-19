#include<iostream>
using namespace std;

int main() {
    char m;
    cout<<"Enter the grade: ";
    cin>>m;
    switch(m) {
        case "O":
        cout<<"Outstanding";
        break;
        case "A":
        cout<<"Excellent";
        break;
        case "B":
        cout<<"Good";
        break;
        case "C":
        cout<<"Average";
        break;
        case "D":
        cout<<"Poor";
        break;
        case "F":
        cout<<"Fail";
        break;
        default:
        cout<<"Invalid grade.";
    }
    return 0;
}