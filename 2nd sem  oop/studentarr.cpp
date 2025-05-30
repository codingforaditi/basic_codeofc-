#include <iostream>
#include <string>
using namespace std;
class STUDENT {
private:
    string name;       
    int rollNumber;    
    string address;    
public:
    void getData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cin.ignore();  
        cout << "Enter address: ";
        getline(cin, address);
    }
    void displayData() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Address: " << address << endl;
    }
};
int main() {
    STUDENT students[10];  
    for (int i = 0; i < 10; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].getData();
        cout << endl;
    }
    cout << "\nDisplaying details of students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        students[i].displayData();
        cout << endl;
    }
    return 0;
}
