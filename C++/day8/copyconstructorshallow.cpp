#include<iostream>
#include<string.h>
using namespace std;
class Shallow{
    int id;
    char name[20];
    public:
    Shallow(){
        id = 1;
        strcpy(name, "Suhani");
    }
    void display(){
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Nmae:"<<name<<endl;
    }
};

int main(){
    Shallow e;
    e.display();
    {
    Shallow e1;
    e1 = e;
    e1.display();
    }
    e.display();
}