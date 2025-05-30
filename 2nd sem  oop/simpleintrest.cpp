#include<iostream>
using namespace std;
void intrest(float p,int t,float r=3.5){
    float intrest=(p*t*r)/float(100);
    cout<<"the intrest ="<<intrest <<endl;
}
int main(){
int t;
float p,r;
cout<<"enter principle"<<endl;
cin>>p;
cout<<"enter time"<<endl;
cin>>t;
//cout<<"enter rate"<<endl;
//cin>>r;
intrest(p,t);
return 0;
}

