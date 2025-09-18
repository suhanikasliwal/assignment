#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    static int cnt;
    public:
           Complex();
           Complex(int, int);
           void show();
           static int getCount();
};
int Complex::cnt;
int Complex::getCount(){
    return cnt;
}
void Complex:: show(){
cout<<"Complex number is: "<<real<<" + "<<img<<"i"<<endl;
}
Complex::Complex(){
    real=12;
    img=4;
    cnt++;
}
Complex::Complex(int real, int img){
    this->real = real;
    this->img = img;
    cnt++;
}
int main(){
    Complex c;
    Complex cc(1, 2);
    c.show();
    cc.show();
    cout<<Complex::getCount();
}