#include<iostream>
#include<string.h>
using namespace std;
class Employee{
    public:
    int id;
    char name[50];
    protected:
    int salary;
    Employee(){
        cout<<"This is Parent class and its default constructor"<<endl;
    }
};
class wageEmployee:public Employee{
      int rate, hour;
      public:
      wageEmployee(int id, char* name){
        this->id = id;
        strcpy(this->name, name);
      }
      void inputSal(){
      cout<<"Enter rate per hour: ";
      cin>>rate;
      cout<<"\nEnter hour: ";
      cin>>hour;
      }
      void displaySal(){
        cout<<id<<endl;
        cout<<name<<endl;
        salary = rate*hour;
        cout<<"Salary of wageEmployee: "<<salary<<endl;
      }
};
int main(){
    char name[]="suhani";
wageEmployee e(1, name);
e.inputSal();
e.displaySal();
}