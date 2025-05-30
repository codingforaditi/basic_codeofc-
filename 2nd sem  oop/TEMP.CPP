#include <iostream>
using namespace std;

class TemperatureConverter {
private:
    float fahrenheit;

public:
    TemperatureConverter(float celsius) {
        fahrenheit = (9 * celsius / 5) + 32;
    }

    void display() {
        cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    }
};

int main() {
    float celsius;

    cout << "Enter the temperature in Centigrade: ";
    cin >> celsius;

    TemperatureConverter convert(celsius);
    convert.display();

    return 0;
}
