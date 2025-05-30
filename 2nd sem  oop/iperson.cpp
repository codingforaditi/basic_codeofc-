#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    string address;

    void getdata() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter address: ";
        cin >> address;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

class Employee : public Person {
public:
    double salary;
    string company_name;

    void setdata() {
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter company name: ";
        cin >> company_name;
    }

    void showTax() {
        double tax = salary * 0.15;
        cout << "Tax (15%): " << tax << endl;
    }

    void display() {
        Person::display();
        cout << "Salary: " << salary << endl;
        cout << "Company Name: " << company_name << endl;
    }
};

int main() {
    Employee emp;

    cout << "Enter person details: " << endl;
    emp.getdata();

    cout << "Enter employee details: " << endl;
    emp.setdata();

    cout << "\nEmployee details:" << endl;
    emp.display();

    emp.showTax();

    return 0;
}
