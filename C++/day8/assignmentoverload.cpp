#include<iostream>
#include<string.h>
using namespace std;
class A{
    char* ptr;
    public:
    A(char* sptr){
        int len = strlen(sptr);
        ptr = new char[len+1];
        strcpy(ptr, sptr);
    }
    void operator=(A& a){
        if(ptr){
            delete[] ptr;
        }
        int len=strlen(a.ptr);
        ptr = new char[len+1];
        strcpy(this->ptr, a.ptr);
    }
    void display(){
        cout<<"Name:"<<ptr<<endl;
    }
};
int main(){
 char name[] = "Pune";
 A a(name);
 a.display();
 {
 char name1[] = "PCMC";
 A a1(name1);
 a1.display();
 a1 = a;
 a1.display();
 }
 a.display();
}