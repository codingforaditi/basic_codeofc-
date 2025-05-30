#include <iostream>
using namespace std;

// Function to display employee details
void Emp_Record(string name, int age, string address = "KATHMANDU") {
    cout << "Employee Name: " << name << endl;
    cout << "Employee Age: " << age << endl;
    cout << "Employee Address: " << address << endl;
}

int main() {
    string name;
    int age;

    // Getting input from user for name and age
    cout << "Enter employee name: ";
    cin >> name;
    
    cout << "Enter employee age: ";
    cin >> age;

    // Call Emp_Record with name and age, using default address "KATHMANDU"
    Emp_Record(name, age);  // No address argument passed, so default is used

    return 0;
}


