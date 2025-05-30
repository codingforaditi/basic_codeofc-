#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    friend std::ostream& operator<<(std::ostream& out, const Date& date);
    friend std::istream& operator>>(std::istream& in, Date& date);
};

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.day << "/" << date.month << "/" << date.year;
    return out;
}

std::istream& operator>>(std::istream& in, Date& date) {
    std::cout << "Enter Day: ";
    in >> date.day;
    std::cout << "Enter Month: ";
    in >> date.month;
    std::cout << "Enter Year: ";
    in >> date.year;
    return in;
}

int main() {
    Date today(7, 1, 2020);
    std::cout << "Today's date: " << today << std::endl;

    Date inputDate(0, 0, 0);
    std::cin >> inputDate;
    std::cout << "Input Date: " << inputDate << std::endl;

    return 0;
}
