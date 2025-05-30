#include<iostream>
using namespace std;
void area (int b,int h){
    float area=0.5*b*h;
    cout<<"area of triangle=" <<area<<endl;
}
void area(int l){
    float area=l*l;
    cout<<"area of square="<<area<<endl;
}
void area(double r){
    float area=3.14*r*r;
    cout<<"area of circle="<<area<<endl;
}
int main(){
   
    area(2,5);
    area(2.2);
    area(3.9);
    return 0;