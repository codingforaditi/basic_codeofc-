#include <iostream>
#include <cmath> 
using namespace std;

class Point {
private:
    double x; 
    double y; 

public:
    void input() {
        cout << "Enter x-coordinate: ";
        cin >> x;
        cout << "Enter y-coordinate: ";
        cin >> y;
    }
    void display() {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }

    double distance(Point p) {
        return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
    }
};

int main() {
    Point p1, p2;
    
    cout << "Enter coordinates for first point (p1):" << endl;
    p1.input(); 
    cout << "\nEnter coordinates for second point (p2):" << endl;
    p2.input(); 

    cout << "\nCoordinates of points entered:" << endl;
    p1.display(); 
    p2.display(); 
   
    double dist = p1.distance(p2);
    cout << "\nDistance between p1 and p2: " << dist << endl;

    return 0;
}
