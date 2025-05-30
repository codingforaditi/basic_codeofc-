#include <iostream>
#include <iomanip>
using namespace std;
int main(){ 
    string name; 
    int a;
    int total;
    int grandtotal;
    cout<<"enter the name of consumer"<<endl; 
    getline(cin,name,'\n');
    cout<<"print no. of units consumed"<<endl; cin>>a;
    if(a<=100){
    total=50+a*0.6;
    grandtotal=total;
}
else if(a>100 && a<=300){ 
    total=50+100*0.6+(a-100)*0.8;
}
else if(a>300){ 
    total=50+100*0.6+200*0.8+(a-300)*0.9;
}
if(total>300){ 
    grandtotal=total+0.15*total;
}
cout<<" NEAC "<<endl; 
cout<<"name"<<setw(50)<<"total"<<setw(15)<<"grandtotal"<<endl;
cout<<name<<setw(50)<<total<<setw(15)<<grandtotal<<endl;
return 0;
}