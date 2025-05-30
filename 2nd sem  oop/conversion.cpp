#include <iostream>
using namespace std;

namespace COLLECTION {
    class NC {
    public:
        int Rs, Paisa;

        void input() {
            cout << "Enter Rupees: ";
            cin >> Rs;
            cout << "Enter Paisa: ";
            cin >> Paisa;
        }

        void show() {
            cout << Rs << " Rupees and " << Paisa << " Paisa" << endl;
        }
    };

    class AC {
    public:
        int Dollar, Cent;

        void input() {
            cout << "Enter Dollars: ";
            cin >> Dollar;
            cout << "Enter Cents: ";
            cin >> Cent;
        }

        void show() {
            cout << Dollar << " Dollars and " << Cent << " Cents" << endl;
        }
    };

    void Conversion(NC nc, AC ac) {
        int total_paisa = (nc.Rs * 100 + nc.Paisa) + (ac.Dollar * 10000 + ac.Cent * 100);
        int total_rupees = total_paisa / 100;
        int remaining_paisa = total_paisa % 100;

        cout << "Total in Rupees: " << total_rupees << " Rupees and " << remaining_paisa << " Paisa" << endl;
    }
}

int main() {
    COLLECTION::NC nc;
    COLLECTION::AC ac;

    nc.input();
    ac.input();

    cout << "\nNC: ";
    nc.show();
    cout << "AC: ";
    ac.show();

    cout << "\nConverted Total: ";
    COLLECTION::Conversion(nc, ac);

    return 0;
}
