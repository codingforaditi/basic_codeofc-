#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float length=23.222333;
    cout<<setprecision(7)<<length<<"\n";
    cout<<setprecision(3)<<fixed<<length<<"\n";
    return 0;
}