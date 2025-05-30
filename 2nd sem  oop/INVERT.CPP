#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point(int xCoord = 0, int yCoord = 0) : x(xCoord), y(yCoord) {}

    friend Point operator-(const Point &p);

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

Point operator-(const Point &p) {
    return Point(-p.x, -p.y);
}

int main() {
    Point p(2, 7);

    cout << "Original: ";
    p.display();

    Point inverted = -p;

    cout << "Inverted: ";
    inverted.display();

    return 0;
}
