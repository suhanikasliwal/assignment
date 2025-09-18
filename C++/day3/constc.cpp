#include<iostream>
using namespace std;
class Student{
    int no;
    char name[];
    Student() const{
        no=11;
        strcpy(name, "S");
    }
};
int main(){
    Student s1;
}