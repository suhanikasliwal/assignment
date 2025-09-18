#include<iostream>
using namespace std;
int main(){
    int* ptr = new int;
    *ptr = 10;
    int* pt = new int(1);
    cout<<*ptr<<" "<<sizeof(*ptr)<<endl;
    cout<<*pt<<" "<<sizeof(*pt)<<endl;
    delete ptr;
}