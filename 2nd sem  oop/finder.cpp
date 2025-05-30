#include <iostream>
using namespace std;
class FINDER {
private:
    int arr[10];  
public:
    void getData() {
        cout << "Enter 10 integers:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    int Largest() {
        int max = arr[0];
        for (int i = 1; i < 10; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
};
int main() {
    FINDER finder;
    finder.getData();  

    int largest = finder.Largest();  
    cout << "The largest number is: " << largest << endl;
    return 0;
}
