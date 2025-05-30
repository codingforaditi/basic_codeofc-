#include <iostream>
using namespace std;

class Dollar {
private:
    float dollars;
    float cents;

public:
    Dollar(float d, float c) {
        dollars = d;
        cents = c;
    }

    float toRupees() {
        return (dollars * 100 + cents) / 100 * 100;
    }
};

class Rupee {
private:
    float rupees;
    float paisa;

public:
    Rupee(float r, float p) {
        rupees = r;
        paisa = p;
    }

    void display() {
        cout << "Amount in Rupees: " << rupees << " Rs " << paisa << " Paisa" << endl;
    }

    Rupee(Dollar dollar) {
        float totalRupees = dollar.toRupees();
        rupees = static_cast<int>(totalRupees);
        paisa = (totalRupees - rupees) * 100;
    }
};

int main() {
    float dollars, cents;

    cout << "Enter the amount in Dollars and Cents:" << endl;
    cout << "Dollars: ";
    cin >> dollars;
    cout << "Cents: ";
    cin >> cents;

    Dollar dollar(dollars, cents);
    Rupee rupee(dollar);
    rupee.display();

    return 0;
}
