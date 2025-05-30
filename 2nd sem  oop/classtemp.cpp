#include <iostream>
using namespace std;

template <typename T>
class Test {
private:
    T data;

public:
    void enterData() {
        cout << "Enter data: ";
        cin >> data;
    }

    void displayData() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Test<int> intObj;
    Test<double> doubleObj;
    Test<string> stringObj;

    intObj.enterData();
    intObj.displayData();

    doubleObj.enterData();
    doubleObj.displayData();

    stringObj.enterData();
    stringObj.displayData();

    return 0;
}
