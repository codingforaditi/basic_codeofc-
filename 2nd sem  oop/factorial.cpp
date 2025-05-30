#include <iostream>
using namespace std;
int main(){
    int i,num,factorial=1;
    cout<<"type number:";
    cin>>num;
    for(i=1;i<=num;i++){
        factorial=factorial*i;
    }
    cout<<"factorial of"<<num<<"="<<factorial;
    return 0;
}