#include <iostream> 
using namespace std;
void linearsolution(float &a,float &b,float &m,float &c,float &d,float &n);
int main()
{ 
    float m,a,b,c,d,n;
    cout<<"enter the value of a,b and m for eqn ax+by=m"<<endl; 
    cin>>a>>b>>m; 
    cout<<"enter the value of c,d and n for eqn cx+dy=n"<<endl; 
    cin>>c>>d>>n;
linearsolution(a,b,m,c,d,n);
return 0;
}
void linearsolution(float &a,float &b,float &m,float &c,float &d,float &n)
{ 
    float x,y; 
    if((a*d-c*b) == 0)
    {
cout<<"not valid input"<<endl; }
else
{ 
    x=(m*d-b*n)/(a*d-c*b); 
    y=(n*a-m*c)/(a*d-c*b);
}
cout<<"the value of x:"<<x<<endl; 
cout<<"the value of y:"<<y<<endl; 
    
}
