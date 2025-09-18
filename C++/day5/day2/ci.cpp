#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double p=5000,n=1,t=2,r=0.1,a;
    a=p*pow((1+r/n),n*t);
    cout<<a;
}