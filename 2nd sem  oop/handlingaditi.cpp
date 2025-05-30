#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int number;

    try {
        cout << "Enter a number: ";
        cin >> number;

        if (number < 0) {
            throw invalid_argument("Negative input is not allowed.");
        }

        if (number < -25) {
            throw out_of_range("Input is less than -25.");
        }

        cout << "You entered: " << number << endl;

    } catch (const invalid_argument &e) {
        cout << "Exception: " << e.what() << endl;

    } catch (const out_of_range &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
