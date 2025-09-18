#include<iostream>
#include<string.h>
using namespace std;
class bankAccount{
float balance;
string password;
public:
int acno;
string holderName;
bankAccount(){
    cout<<"Enter bank account number: ";
    cin>>acno;
    cout<<"\nEnter holder name: ";
    cin>>holderName;
    cout<<"Enter Password: ";
    cin>>password;
    balance = 0.0;
}
void deposit(float amt){
    balance += amt;
    cout<<"Deposited Successfully"<<endl;
}
void display(){
    string password1;
    cout<<"Enter Password: ";
    cin>>password1;
    if(password==password1){
    cout<<"Account Number: "<<acno<<endl;
    cout<<"Account Holder Name: "<<holderName<<endl;
    cout<<"Balance: "<<balance<<endl;
    }
    else{
        throw "Incorrect Password";
    }
}
void withdraw(){
    float withdrw = 0;
    cout<<"Enter the how much amount you want to withdraw: "<<endl;
    cin>>withdrw;
    if(withdrw>balance){
        throw "Insufficient Balance";
    }
    balance -= withdrw;
    cout<<"Successfully Withdrawed!"<<endl;

}
};
int main(){
    bankAccount ba;
    ba.deposit(10000000.0f);
    ba.display();
    ba.withdraw();
    ba.display();
}