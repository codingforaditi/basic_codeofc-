#include <iostream> 
using namespace std;
int main(){
int i;
/*int *p=new int(20);
cout<<"the adress is: "<<p<<endl; 
cout<<"the value is"<<*p<<endl; 
delete p;
cout<<"the adress is: "<<p<<endl; 
cout<<"the value is"<<*p<<endl;*/ 
int *q= new int[5];
cout<<"enter the value"<<endl; 
for( i=0;i<5;i++){
cin >>q[i]; }
for( i=0;i<5;i++)
{ 
    cout<<i<<"value"<<q[i]<<endl;
}
delete [] q;
return 0;
}
