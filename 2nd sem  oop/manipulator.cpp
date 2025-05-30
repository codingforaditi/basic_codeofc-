#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"player's name"<<setw(20)<<"Runs"<<setw(12)<<"innings"<<setw(12)<<"Average"<<"\n";
    cout<<"sachin"<<setw(28)<<"12300"<<setw(8)<<"200"<<setw(12)<<(12300/200)<<"\n";
    cout<<"saurav"<<setw(28)<<"10000"<<setw(8)<<"130"<<setw(12)<<(10000/130)<<"\n";
    cout<<"Rahul"<<setw(28)<<"8990"<<setw(9)<<"134"<<setw(12)<<(8990/134)<<"\n";
    return 0;
}