#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Constructor to initialize data members
    Time() {
        hour = 0;
        minute = 0;
        second = 0;
    }

    // Function to input data for Time object
    void inputTime() {
        cout << "Enter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;
    }

    // Function to show data of Time object
    void displayTime() const {
        cout << hour << "h " << minute << "m " << second << "s" << endl;
    }

    // Function to add two Time objects
    Time addTime(const Time &t) const {
        Time temp;
        temp.second = second + t.second;
        temp.minute = minute + t.minute;
        temp.hour = hour + t.hour;
        return temp;
    }
};

int main() {
    Time time1, time2, result;

    cout << "Enter the first time:\n";
    time1.inputTime();

    cout << "\nEnter the second time:\n";
    time2.inputTime();

    // Add the two Time objects
    result = time1.addTime(time2);

    cout << "\nThe first time entered: ";
    time1.displayTime();

    cout << "The second time entered: ";
    time2.displayTime();

    cout << "The result of addition: ";
    result.displayTime();

    return 0;
}
