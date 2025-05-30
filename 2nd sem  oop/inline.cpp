#include<iostream>
using namespace std;
inline int area(int l,int w){
return l*w;
}
int main(){
    int l,w;
        cout<<"enter the value of l and w";
    cin>>l>>w;
    cout<<"length and width:"<<l<<endl<<w<<endl;
    cout<<"area of rectangle is :"<< area(l,w);

    return 0;
}
