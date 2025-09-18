#include<iostream>
using namespace std;
namespace ns1{
    void task(){
        cout<<"this is namespace ns1"<<endl;
    }
}
namespace ns2{
    void task(){
        cout<<"This is namespace of ns2"<<endl;
    }
}
int main(){
    ns1::task();
    ns2::task();
}