#include <iostream> 
using namespace std;
int main(){
int i,n;
cout<<"enter the no. of students"<<endl;
cin>>n;
int *q= new int[n];
for( i=0;i<n;i++)
{
cout<<"enter the gpa of student"<<endl;
cin >>q[i]; }
for( i=0;i<5;i++){
cout<<i+1<<" student's GPA value:"<<q[i]<<endl; }
delete [] q; 
return 0;
}
