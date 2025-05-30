#include<iostream>
using namespace std;
struct EMPLOYEE{
    string name;
    int age;
    float salary;
void getdata(){
    cout<<"enter the name of employee"<<endl;
    getline(cin,name);
    cout<<"enter the age of employee"<<endl;
    cin>>age;
     cout<<"enter the salary of employee"<<endl;
    cin>>salary;
}
void display(){
    cout<<"name of employee  "<<name<<endl;
    cout<<"age of employee  "<<age<<endl;
}
};
int main(){
    EMPLOYEE A;
    A.getdata();
    A.display();
    return 0;
}