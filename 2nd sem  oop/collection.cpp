#include <iostream>
using namespace std;

// Namespace COLLECTION
namespace COLLECTION {

    // Structure NC (Rupees and Paisa)
    struct NC {
        int Rs;    // Rupees
        int Paisa; // Paisa

        // Member function to input data
        void input() {
            cout << "Enter Rupees and Paisa: ";
            cin >> Rs >> Paisa;
        }

        // Member function to show data
        void show() {
            cout << Rs << " Rupees and " << Paisa << " Paisa" << endl;
        }
    };

    // Structure AC (Dollar and Cent)
    struct AC {
        int Dollar; // Dollar
        int Cent;   // Cent

        // Member function to input data
        void input() {
            cout << "Enter Dollars and Cents: ";
            cin >> Dollar >> Cent;
        }

        // Member function to show data
        void show() {
            cout << Dollar << " Dollars and " << Cent << " Cents" << endl;
        }
    };
}

// External function to convert AC to Rupees
void Conversion(const COLLECTION::NC& nc, const COLLECTION::AC& ac) {
    int totalRupees = nc.Rs + ac.Dollar * 100 + (ac.Cent * 100) / 100;
    int totalPaisa = nc.Paisa;

    // Output the total
    cout << "Total Amount in Rupees: " << totalRupees << " Rupees and " << totalPaisa << " Paisa" << endl;
}

int main() {
    COLLECTION::NC nc;
    COLLECTION::AC ac;

    // Input data
    nc.input();
    ac.input();

    // Show data
    nc.show();
    ac.show();

    // Perform conversion
    Conversion(nc, ac);

    return 0;
}
