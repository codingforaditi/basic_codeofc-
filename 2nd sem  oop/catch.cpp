#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int a = 10, b;

    cout << "Enter a divisor: ";
    cin >> b;

    try {
        if (b == 0) {
            throw runtime_error("Division by zero.");
        }
        if (b < 0) {
            throw invalid_argument("Negative divisor.");
        }
        cout << "Result: " << a / b << endl;
    }
    catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
