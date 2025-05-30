#include <iostream> 

#include <iomanip> 
using namespace std; 
int main(){
string line;
cout<<"enter the multiple line"<<endl; 
getline(cin,line,'!');
cout<<"entered multiple line is :"<<endl<<line<<endl; 
return 0;
}
