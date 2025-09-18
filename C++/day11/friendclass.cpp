#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void set(int x){
        a=x;
    }
    friend class A1;
};
class A1{
    int b;
    public:
    void set1(int x){
        b=x;
    }
    int add1(A& a1){
        return (b+a1.a);
    }
    int get(A a1){
    return a1.a;
    }
};
int main(){
    A a1;
    A1 b;
    b.set1(10);
    a1.set(10);
    cout<<b.add1(a1);
    cout<<b.get(a1);
}