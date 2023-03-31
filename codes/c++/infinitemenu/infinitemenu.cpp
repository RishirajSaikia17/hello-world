#include<iostream>
using namespace std;

class weight {
    char u;
    float val, res;
    public:
    void getweight() {
        cout << "Enter unit in kilogram(k) or pounds(l): ";
        cin >> u;
        cout << "Enter the value: ";
        cin >> val;
        switch(u) {
            case 'k':
            res = val * 2.20462;
            cout << "The value in pounds is " << res << "lbs." << endl;
            break;
            case 'l':
            res = val / 2.20462;
            cout << "The value in kilograms is " << res << "kg." << endl;
            break;
            default:
            cout << "Invalid unit." << endl;
            break;
        }
    }
};

class temperature {
    char u;
    float val, res;
    public:
    void gettemp() {
        cout << "Enter the unit of temperature: ";
        cin >> u;
        cout << "Enter the value: ";
        cin >> val;
        switch(u) {
            case 'c':
            res = (val * 9/5) + 32;
            cout << "Temperature in fahrenheit is " << res << "'F" << endl;
            break;
            case 'f':
            res = (val -32) * 5/9;
            cout << "Temperature in celcius is " << res << "'C" << endl;
            break;
            default:
            cout << "Invalid unit.";
            break;
        }
    }
};

int main() {
    weight w;
    temperature t;
    int choice;
    while(1) {
        cout << "\nSelect one of the options:- \n";
        cout << "1. Weight converter\n";
        cout << "2. Temperature converter\n";
        cout << "3. Option C\n";
        cout << "1. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
            cout << "Weight converter:-\n";
            w.getweight();
            break;
            case 2:
            cout << "Temperature converter:-\n";
            t.gettemp();
            break;
            case 3:
            cout << "You have selected option C.\n";
            break;
            case 4:
            cout << "Exiting program...\n\n";
            return 0;
            break;
            default:
            cout << "Invalid choice.\n";
            break;
        }
    }
    return 0;
}