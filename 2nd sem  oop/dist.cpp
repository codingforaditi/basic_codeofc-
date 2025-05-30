#include <iostream>
using namespace std;

class Distance {
private:
    float meters;

public:
    Distance(float m) {
        meters = m;
    }

    operator float() {
        return meters;
    }
};

int main() {
    Distance dist(10.5);
    float meters;

    meters = dist;

    cout << "Distance in meters: " << meters << endl;

    return 0;
}
