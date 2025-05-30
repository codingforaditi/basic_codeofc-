#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int v) {
        value = v;
    }

    void display() {
        cout << "Value in MyClass: " << value << endl;
    }
};

int main() {
    int num = 42;
    MyClass obj = num;
    obj.display();

    return 0;
}
