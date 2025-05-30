#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    void setValues(float r, float i) {
        real = r;
        imaginary = i;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.setValues(2.5, 3.5);
    c2.setValues(1.5, 4.5);
    c3 = c1.add(c2);
    cout << "The sum of the two complex numbers is: ";
    c3.display();
    return 0;
}
