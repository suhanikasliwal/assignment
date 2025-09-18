#include<iostream>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex();
    Complex(int, int);
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator++();
    Complex operator--();
     Complex operator++(int);
    Complex operator--(int);
    void display(){
        if(img>0){
        cout<<real<<"+"<<img<<"i"<<endl;
        }
        else{
         cout<<real<<img<<"i"<<endl;
        }
    }
};
Complex::Complex(){
    real = 0;
    img = 0;
} 
Complex::Complex(int r, int i){
    real = r;
    img = i;
}
Complex Complex:: operator+(Complex c){
    Complex temp;
    temp.real = this->real+c.real;
    temp.img = this->img+c.img;
    return temp;
}
Complex Complex:: operator-(Complex c){
    Complex temp;
    temp.real = this->real-c.real;
    temp.img = this->img-c.img;
    return temp;
}
Complex Complex:: operator++(){
   this->real = this->real + 1;
   this->img = this->img + 1;
   return (*this);
}
Complex Complex:: operator--(){
   this->real = this->real - 1;
   this->img = this->img - 1;
   return (*this);
}
Complex Complex:: operator++(int){
    Complex temp = (*this);
   this->real = this->real + 1;
   this->img = this->img + 1;
   return temp;
}
Complex Complex:: operator--(int){
    Complex temp = (*this);
   this->real = this->real - 1;
   this->img = this->img - 1;
   return temp;
}
int main(){
Complex c1(1, 2);
Complex c2(3, 4);
Complex c3 = c1 + c2;
cout<<"Addition: "<<endl;
c3.display();
c3 = ++c2;
cout<<"\nPre-Increment: "<<endl;
c3.display();
c2.display();
cout<<"\nPre decrement"<<endl;
c3 = --c2;
c3.display();
c2.display();
cout<<"\nPost increment"<<endl;
c3 = c2++;
c3.display();
c2.display();
cout<<"\npost decrement"<<endl;
c3 = c2--;
c3.display();
c2.display();
}