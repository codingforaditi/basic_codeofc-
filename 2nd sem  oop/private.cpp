#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class function called" << endl;
    }
};

class Derived : private Base {
public:
    void accessBase() {
        show();
    }
};

int main() {
    Derived d;
    d.accessBase();
    return 0;
}
