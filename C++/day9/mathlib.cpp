#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int sq = 144;
    int num = 4;
    float fnum1= 9.2;
    float fnum2=9.8;
    int nnum = -90;
    cout<<"Square: "<<sqrt(sq)<<endl;
    cout<<"Absolute: "<<abs(nnum)<<endl;
    cout<<"Absolute Float: "<<abs(-9.2)<<endl;
    cout<<"Ceil: "<<ceil(fnum1)<<endl;
    cout<<"Floor: "<<floor(fnum2)<<endl;
    cout<<"Power of "<<num<<": "<<pow(num, 2)<<endl;
    cout<<"Round of: "<<round(fnum2)<<endl;
}