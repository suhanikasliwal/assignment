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
class earningPerson:public Employee{
      protected:
      int rate, hour;
      public:
      earningPerson(){

      }
      earningPerson(int id, char* name){
        this->id = id;
        strcpy(this->name, name);
      }
      void inputSal(){
      cout<<"Enter rate per hour: ";
      cin>>rate;
      cout<<"\nEnter hour: ";
      cin>>hour;
      }
      int getSal(){
       salary = rate*hour;
       return salary;
      }
};
class salesperson:protected earningPerson{
    int sales,comm;
    public:
    salesperson(int id, char* name){
      this->id = id;
      strcpy(this->name, name);
    }

    void inputSal1(){
      inputSal();
      cout<<"Enter no.of sales: ";
      cin>>sales;
      cout<<"\nEnter commision: ";
      cin>>comm;

      }
      void displaySal1(){
        cout<<id<<endl;
        cout<<name<<endl;
        salary=((sales*comm)+getSal());
        cout<<"Salary of sales person: "<<salary<<endl;
      }
};
int main(){
    char name[]="suhani";
salesperson e(1, name);
e.inputSal1();
e.displaySal1();
}