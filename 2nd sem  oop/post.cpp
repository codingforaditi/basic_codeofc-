#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator++(int) {
        Complex temp = *this;
        ++real;
        ++imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c(2, 3);

    cout << "Before increment: ";
    c.display();

    c++;

    cout << "After increment: ";
    c.display();

    return 0;
}
