#include<iostream>
#include<stdlib.h>
using namespace std;
class A{
    int a;
    public:
    A(){
        cout<<"this is defualt constructor"<<endl;
    }
    ~A(){
        cout<<"this is destructor"<<endl;
    }
};
int main(){
    A *a=new A();
    delete a;
    A* b=(A*)malloc(sizeof(A));
    free(b);
}