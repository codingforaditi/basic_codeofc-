#include <iostream>
using namespace std;

void search(int d[]) {
    int a, i;
    int status = 0;
    cout << "Enter the integer you want to search:" << endl;
    cin >> a;

    for (i = 0; i < a; i++) {
        if (a == d[i]) {
            status += 1;
        }
    }

    if (status > 0) {
        cout << "Your search exists." << endl;
    } else {
        cout << "Your search does not exist." << endl;
    }
}

void search(char e[]) {
    char a;
    int i;
    int l = 0;
    cout << "Enter the character you want to search:" << endl;
    cin >> a;

    for (i = 0; i < a; i++) {
        if (a == e[i]) {
            l += 1;
        }
    }

    if (l > 0) {
        cout << "Your search exists." << endl;
    } else {
        cout << "Your search does not exist." << endl;
    }
}

void search(float g[]) {
    float a;
    int i;
    int z = 0;
    cout << "Enter the float you want to search:" << endl;
    cin >> a;

    for (i = 0; i < a; i++) {
        if (a == g[i]) {
            z += 1;
        }
    }

    if (z > 0) {
        cout << "Your search exists." << endl;
    } else {
        cout << "Your search is not found." << endl;
    }
}

int main() {
    int a[] = {1, 2, 3, 5};
    char b[] = {'a', 'b', 'c', 'd'};
    float c[] = {1.2, 3.2, 4.5, 6.3};

    search(a);
    search(b);
    search(c);

    return 0;
};