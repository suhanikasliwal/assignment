#include<iostream>
#include<string.h>
using namespace std;
class Sportsperson{
    char* game;
    public:
    Sportsperson(char* game){
    this->game = new char[strlen(game)+1];
    strcpy(this->game, game);
    }
    void display(){
        cout<<"Sports: "<<game<<endl;
    }
};
class Person{
    char* name;
    int phonen;
    char* address;
    public:
    Person(char* name, int phonen, char* address){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
        this->phonen = phonen;
        this->address = new char[strlen(address)+1];
        strcpy(this->address, address);
    }
    void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Phone Number: "<<phonen<<endl;
    cout<<"Address: "<<address<<endl;
    }
};

class Employee: public Person, public Sportsperson{
    protected:
    int id;
    char* desig;
    float salary;
    public:
    Employee(char* name, int phonen, char* address, int id, char* desig, float salary, char* game): Person(name, phonen, address), Sportsperson(game){
        this->id = id;
        this->desig = new char[strlen(desig)+1];
        strcpy(this->desig, desig);
        this->salary = salary;
    }
    void display(){
        Person::display();
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Designation: "<<desig<<endl;
        cout<<"Salary: "<<salary<<endl;
        Sportsperson::display();
    }
};
int main(){
    char address[]="PCMC";
    char game[] = "Cricket";
    char name[] = "Suhani";
    char desig[] = "SDE";
    Employee p(name, 1234567891, address, 1, desig, 10000, game);
    p.display();
}