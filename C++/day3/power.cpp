#include<iostream>
using namespace std;
int main(){
    int base=4,pow=2;
    for(int i=1;i<pow;i++){
        base*=base;
    }
    cout<<"Answer"<<base;
}