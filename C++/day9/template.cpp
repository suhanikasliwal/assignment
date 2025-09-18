#include<iostream>
using namespace std;
template <class A, class B>
void add(A a, B b){
    cout<<a+b<<endl;
}
int main(){
    add(4, 12);
}