#include <iostream>
using namespace std;

class Example {
private:
    int value;

public:
    Example() {
        value = 0;
        cout << "Default Constructor called. Value is " << value << endl;
    }

    Example(int v) {
        value = v;
        cout << "Parameterized Constructor called. Value is " << value << endl;
    }

    Example(const Example &obj) {
        value = obj.value;
        cout << "Copy Constructor called. Value is " << value << endl;
    }

    void display() const {
        cout << "Value is: " << value << endl;
    }
};

int main() {
    Example obj1;
    obj1.display();

    Example obj2(42);
    obj2.display();

    Example obj3 = obj2;
    obj3.display();

    return 0;
}
