#include<iostream>
#include<string.h>
using namespace std;
class Employee{
    float salary;
    public:
    int id;
    char* name;
    friend void display(Employee&);
    void set(int sal){
        salary = sal;
    }
    int get(){
        return salary;
    }
    Employee(int id, char* name){
    this->id = id;
    this->name = new char[strlen(name)+1];
    strcpy(this->name, name);
    }
};
void display(Employee& obj){
    cout<<"Employee ID: "<<obj.id;
    cout<<"Employee Name: "<<obj.name;
    cout<<"Employee Salary: "<<obj.get();
} 
int main(){
    char name[] = "Suhani";
    Employee obj(1, name);
    obj.set(100000.0);
    display(obj);
}
