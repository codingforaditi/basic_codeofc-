#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) : value(v) {}

    bool operator<=(const Number &n) {
        return value <= n.value;
    }
};

int main() {
    Number n1(4);
    Number n2(9);

    if (n1 <= n2) {
        cout << "n1 is less than or equal to n2." << endl;
    } else {
        cout << "n1 is greater than n2." << endl;
    }

    return 0;
}
