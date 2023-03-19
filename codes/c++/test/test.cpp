#include<iostream>
using  namespace std;

class rect {
    private:
    int length, width, height;
    void getbox() {
        cout << "Enter length, width and height: ";
        cin >> length >> width >> height;
    }
    public:
    void putbox() {
        int area;
        getbox();
        area = length * width * height;
        cout << "Area: " << area;
    }
};

int main() {
    rect a;
    a.putbox();
    return 0;
}