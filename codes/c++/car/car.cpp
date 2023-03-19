#include<iostream>
using namespace std;

class car {
    private:
    int year;
    string brand;
    string model;
    void getcar() {
        cout << "Enter Year: ";
        cin >> year;
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Model: ";
        cin >> model;
        cout << endl;
        cout << "YEAR: " << year << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
    }

    public:
    void putcar() {
        getcar();
    }
};

int main() {
    car a;
    a.putcar();
    return 0;
}