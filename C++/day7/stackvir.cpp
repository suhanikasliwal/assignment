#include<iostream>
#include<string.h>
using namespace std;
class Employee{
    public:
    int id;
    public: 
    Employee();
    Employee(int);
    virtual void display();
    virtual int getSalary();
};
Employee::Employee(){
    cout<<"This is default 1"<<endl;
    id=0;
}
Employee::Employee(int id){
    cout<<"This is para 1"<<endl;
    this->id = id;
}
void Employee::display(){
    cout<<"Employee id: "<<id<<endl;
}
int Employee::getSalary(){
    return 0;
}
class wageEmployee:public Employee{
      int rate, hour;
      public:
      wageEmployee(){
      cout<<"This is default 2"<<endl;
      rate = 10000;
      hour = 5;
      }
      wageEmployee(int id, int rate, int hour): Employee(id){
        cout<<"This is para 2"<<endl;
        this->rate = rate;
        this->hour = hour;
      }
      void display(){
        cout<<"Employee ID: "<<id<<endl;
        cout <<"Salary: "<<rate*hour<<endl;
      }
      int getSalary(){
       int salary = rate*hour;
       return salary;
      }
};

int main(){

Employee *ptr;
wageEmployee e1(1, 1000, 10);
ptr = &e1;
ptr->display();
int salary = ptr->getSalary();
cout<<"Salary: "<<salary;
}