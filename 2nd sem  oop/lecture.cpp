#include <iostream>
using namespace std;

class Lecturer {
public:
    int id;
    string name;

    void setdata() {
        cout << "Enter Lecturer ID: ";
        cin >> id;
        cout << "Enter Lecturer Name: ";
        cin >> name;
    }

    void display() {
        cout << "Lecturer ID: " << id << endl;
        cout << "Lecturer Name: " << name << endl;
    }
};

class PartTime : public Lecturer {
public:
    float payPerHr;

    void setdata() {
        Lecturer::setdata();
        cout << "Enter Pay Per Hour: ";
        cin >> payPerHr;
    }

    void display() {
        Lecturer::display();
        cout << "Pay Per Hour: " << payPerHr << endl;
    }
};

class FullTime : public Lecturer {
public:
    float payPerMonth;

    void setdata() {
        Lecturer::setdata();
        cout << "Enter Pay Per Month: ";
        cin >> payPerMonth;
    }

    void display() {
        Lecturer::display();
        cout << "Pay Per Month: " << payPerMonth << endl;
    }
};

int main() {
    PartTime ptLecturer;
    FullTime ftLecturer;

    cout << "Enter details for Part-Time Lecturer:" << endl;
    ptLecturer.setdata();

    cout << "\nEnter details for Full-Time Lecturer:" << endl;
    ftLecturer.setdata();

    cout << "\nPart-Time Lecturer details:" << endl;
    ptLecturer.display();

    cout << "\nFull-Time Lecturer details:" << endl;
    ftLecturer.display();

    return 0;
}
