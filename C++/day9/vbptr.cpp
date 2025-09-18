#include<iostream>
using namespace std;
class Person{
    public:
    int x;
    Person(){
        cout<<"this is default of person"<<endl;
    }
    Person(int x){
        cout<<"this is parametrize of person"<<endl;

    }
    void show(){
        cout<<"show function of person is called"<<endl;
    }

};
class Faculty:virtual public Person{
    public:
    Faculty(int x):Person(x){
        cout<<"this is parametrize of faculty"<<endl;
    }
};
class Student:virtual public Person{
    public:
    Student(int x):Person(x){
        cout<<"this is parametrize of Student"<<endl;
    }
};
class TA:public Faculty,public Student{
    public:
    TA(int x):Faculty(x),Student(x){
        cout<<"this is parametrize of TA"<<endl;
    }
};
int main(){
    TA obj(10);
    obj.Faculty::show();
    

}