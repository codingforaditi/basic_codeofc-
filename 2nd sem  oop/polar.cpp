#include <iostream>
#include <cmath>
using namespace std;

class Polar {
private:
    float r;
    float a;

public:
    Polar(float radius, float angle) {
        r = radius;
        a = angle;
    }

    float getR() {
        return r;
    }

    float getA() {
        return a;
    }
};

class Rectangle {
private:
    float x;
    float y;

public:
    Rectangle(float xCoord, float yCoord) {
        x = xCoord;
        y = yCoord;
    }

    Rectangle(Polar polar) {
        x = polar.getR() * cos(polar.getA());
        y = polar.getR() * sin(polar.getA());
    }

    void display() {
        cout << "Rectangle coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    float radius, angle;

    cout << "Enter the radius: ";
    cin >> radius;
    cout << "Enter the angle in radians: ";
    cin >> angle;

    Polar polar(radius, angle);
    Rectangle rectangle(polar);
    rectangle.display();

    return 0;
}
