#include<iostream>
using namespace std;
class Employee{
    int salary;
    public:
    int id;
    void set_salary(){
        cout<<"Enter Employee ID: "<<endl;
        cin>>id;
        cout<<"enter salary:\n";
        cin>>salary;
    }    
    int getSalary(){
        return salary;
    }
    void display(){
        cout<<"Employee ID: "<<id<<endl;
    }
};

int main(){
Employee e;
e.set_salary();
e.display();
cout<<e.getSalary();
}