#include <iostream> 
#include <iomanip>
using namespace std;
void swap(float &x, float &y); 
int main(){
float a,b;
cout<<"enter the value of a and b"<<"\n";
cin>>a>>b;
cout<<"the value before swap,a:"<<a<<"\n"<<"the value before of, b:"<<b<<"\n";
swap(a,b);
cout<<"the value after swap,a:"<<a<<"\n"<<"the value after swap, b:"<<b<<"\n";
return 0;
}
void swap(float &x, float &y){ 
float temp;
temp=x;
x=y;
y=temp;
}