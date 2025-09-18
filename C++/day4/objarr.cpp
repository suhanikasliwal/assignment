#include<iostream>
using namespace std;
class Employee{
    int id;
    char name[20];
    public:
    void getData();
    void putData();
};
void Employee::getData(){
    cout<<"Enter employee id: ";
    cin>>id;
    cout<<"Enter employee name: ";
    cin>>name;
}
void Employee::putData(){
    cout<<id<<" "<<name<<endl;
}
int main(){ 
    int n;
    cout<<"Enter number of present employee: ";
    cin>>n;
    Employee e[30];
    for(int i=0;i<n;i++){
        e[i].getData();
    }
    cout<<"\nEmployees present: \n";
    for(int i=0;i<n;i++){
        e[i].putData();
    }
}