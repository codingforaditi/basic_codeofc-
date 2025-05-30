#include <iostream>
using namespace std;

class COMPANY {
private:
    string E_name;
    string E_address;
    int E_id;
    static int id_counter;
    static int employee_count;

public:
    COMPANY() {
        E_id = id_counter++;
        employee_count++;
    }

    void input() {
        cout << "Enter Employee Name: ";
        cin >> E_name;
        cout << "Enter Employee Address: ";
        cin >> E_address;
    }

    void show() const {
        cout << "Employee ID: " << E_id << ", Name: " << E_name << ", Address: " << E_address << endl;
    }

    static void Count_Employee() {
        cout << "Total Employees: " << employee_count << endl;
    }
};

int COMPANY::id_counter = 100;
int COMPANY::employee_count = 0;

int main() {
    COMPANY emp1, emp2;

    emp1.input();
    emp1.show();

    emp2.input();
    emp2.show();

    COMPANY::Count_Employee();

    return 0;
}
