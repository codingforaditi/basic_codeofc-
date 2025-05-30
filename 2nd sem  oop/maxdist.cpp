#include <iostream>
using namespace std;

class Distance {
public:
    int feet;
    int inches;

    void input() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    int toInches() const {
        return (feet * 12) + inches;
    }

    static Distance Maximum(Distance d1, Distance d2, Distance d3) {
        if (d1.toInches() >= d2.toInches() && d1.toInches() >= d3.toInches())
            return d1;
        else if (d2.toInches() >= d1.toInches() && d2.toInches() >= d3.toInches())
            return d2;
        else
            return d3;
    }
};

int main() {
    Distance d1, d2, d3, maxDist;

    cout << "Enter the first distance:" << endl;
    d1.input();

    cout << "Enter the second distance:" << endl;
    d2.input();

    cout << "Enter the third distance:" << endl;
    d3.input();

    maxDist = Distance::Maximum(d1, d2, d3);

    cout << "\nThe maximum distance is: ";
    maxDist.display();

    return 0;
}
