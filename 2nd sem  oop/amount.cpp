#include <iostream>
using namespace std;

class Amount2;

class Amount1 {
private:
    float rs;

public:
    Amount1(float rupees) {
        rs = rupees;
    }

    Amount1(Amount2 paisa);
    
    void display() {
        cout << "Amount in Rupees: " << rs << " Rs" << endl;
    }

    float getRs() {
        return rs;
    }
};

class Amount2 {
private:
    int paisa;

public:
    Amount2(int p) {
        paisa = p;
    }

    Amount1 toAmount1() {
        return Amount1(paisa / 100.0);
    }
};

class Amount3 {
private:
    float dollars;

public:
    Amount3(float d) {
        dollars = d;
    }

    Amount3(Amount1 amount) {
        dollars = amount.getRs() / 100;
    }

    void display() {
        cout << "Amount in Dollars: " << dollars << " $" << endl;
    }
};

Amount1::Amount1(Amount2 paisa) {
    rs = paisa.toAmount1().getRs();
}

int main() {
    int paisa;
    float rupees;

    cout << "Enter the amount in Paisa: ";
    cin >> paisa;

    Amount2 amount2(paisa);
    Amount1 amount1(amount2);
    amount1.display();

    cout << "Enter the amount in Rupees: ";
    cin >> rupees;

    Amount1 amount1FromRupees(rupees);
    Amount3 amount3(amount1FromRupees);
    amount3.display();

    return 0;
}
