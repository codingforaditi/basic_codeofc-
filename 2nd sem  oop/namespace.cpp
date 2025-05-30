#include <iostream>
using namespace std;
namespace Employee_Details{
string name;
int age;
int id;
int salary;
void Data_Entry(){
cout<<"enter the name of employee"<<endl;
cin>>name;
cout<<"enter the age of employee"<<endl; 
cin>>age;
cout<<"enter the id of employee"<<endl; 
cin>>id;
cout<<"enter the salary of employee"<<endl;
cin>>salary;
}
 void Calc_Tax(int salary) {
            int tax;
        if (salary < 15000) {
            tax = salary * 0.02;
        } else if (salary >= 15000 && salary <= 20000) {
            tax = salary * 0.05;
        } else if (salary > 20000) {  
            tax = salary * 0.1;
        }
        cout << "The tax of given person is " << tax << endl;
    }
}
int main(){
    Employee_Details::Data_Entry();
    Employee_Details::Calc_Tax(Employee_Details::salary); 
    return 0;
}

