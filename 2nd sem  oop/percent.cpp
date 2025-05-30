#include<iostream>
using namespace std;
struct STUDENT{
    string name;
    int roll;
    float total_marks;
    void getdata(){
cout<<"enter the name of student"<<endl;
cin>>name;
cout<<"enter the roll of student"<<endl;
cin>>roll;
cout<<"enter the total marks obtained"<<endl; 
cin>>total_marks;
}
void display(){
    cout<<"enter name of student"<<name<<endl;
    cout<<"enter roll of student"<<roll<<endl;
    cout<<"enter total marks of student"<<total_marks<<endl;

}
void percent(){
    int percentage,full_marks;
    cout<<"enter the full marks"<<full_marks<<endl;
    cin>>full_marks;
    percentage= (float(total_marks)/full_marks)*100; 
    cout<<"obtained percentage"<<percentage<<"%"<<endl;
}
};
int main(){
STUDENT A;
A.getdata();
A.display();
A.percent();
return 0;
}
