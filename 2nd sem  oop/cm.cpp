#include <iostream>
using namespace std;

class Converter {
private:
    float centimeters;

public:
    Converter(float inches) {
        centimeters = inches / 0.39;
    }

    void display() {
        cout << "Length in centimeters: " << centimeters << endl;
    }
};

int main() {
    float inches;

    cout << "Enter the length in inches: ";
    cin >> inches;

    Converter convert(inches);
    convert.display();

    return 0;
}
