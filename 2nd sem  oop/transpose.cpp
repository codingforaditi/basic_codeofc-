#include <iostream>
using namespace std;

class Matrix {
public:
    int data[2][2]; 

    void input() {
        cout << "Enter elements for a 2x2 matrix:" << endl;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> data[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix transpose() {
        Matrix transposed;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                transposed.data[j][i] = data[i][j];
            }
        }
        return transposed;
    }
};

int main() {
    Matrix mat, transposed;

    mat.input();

    cout << "\nOriginal Matrix:" << endl;
    mat.display();

    transposed = mat.transpose();

    cout << "\nTransposed Matrix:" << endl;
    transposed.display();

    return 0;
}
