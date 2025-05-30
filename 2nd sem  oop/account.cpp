#include<iostream>
#include<string>
using namespace std;
class ACCOUNT{
string name_of_depositor;
int account_number;
float balance_amount;
public:
       ACCOUNT(string name,int acc,float amount){
    name_of_depositor=name;
account_number=acc;
balance_amount=amount;
}
void deposite(float balance_amount);
void withdraw(float balance_amount);
void display(){
    cout<<"name of depositor="<<name_of_depositor<<endl;
    cout<<"account no.="<<account_number<<endl;
    cout<<"balance="<<balance_amount<<endl;
}
};
void ACCOUNT::deposite(float amount) {
    if (amount > 0) {
        balance_amount += amount;
        cout << amount << " deposited successfully." << endl;
    } else {
        cout << "Invalid deposit amount." << endl;
    }
}
void ACCOUNT::withdraw(float amount) {
    if (amount > balance_amount) {
        cout << "Insufficient balance. Withdrawal failed." << endl;
    } else {
        balance_amount -= amount;
        cout << amount << " withdrawn successfully." << endl;
    }
}
int main() {
    ACCOUNT account("krishna", 123456, 1000.0);
    account.display();
    cout << endl;

    account.deposite(500.0);
    account.display();
    cout << endl;

    account.withdraw(700.0);
    account.display();
    cout << endl;

    account.withdraw(1000.0);
    account.display();

    return 0;
}
