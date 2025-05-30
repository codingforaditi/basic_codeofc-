#include <iostream>
using namespace std;

class LengthConverter {
private:
    float meters;

public:
    LengthConverter(float feet) {
        meters = feet * 0.304;
    }

    void display() {
        cout << "Length in meters: " << meters << endl;
    }
};

int main() {
    float feet;

    cout << "Enter the length in feet: ";
    cin >> feet;

    LengthConverter convert(feet);
    convert.display();

    return 0;
}
