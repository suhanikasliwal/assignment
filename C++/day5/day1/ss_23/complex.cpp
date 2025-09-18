#include<iostream>
using namespace std;
class Complex{
	int real;
	int img;
	public:
		Complex();
		Complex(int, int);
	void accept();
	void display() const;
	int getReal() const;
	void setReal(int);
};
Complex::Complex(){
	cout<<"this is default constructor"<<endl;
}
Complex::Complex(int r, int i){
	real = r;
	img=i;
}
void Complex::accept(){
	cout<<"enter the valve of real and img";
	cin>>real>>img;

}
void Complex::display() const{
	cout<<"complex no is"<<real<<"+"<<img<<"i"<<endl;
}
void Complex::setReal(int r){
	real = r;
}
int Complex::getReal() const{
	return real;
}
int main(){
	Complex c1(4, 12);
	Complex c2;
	const Complex c3(3, 6);
/*	c1.display();
	c2.display();
	c1.setReal(3);
	c1.display();
	cout<<c1.getReal();
	c2.accept();
	c2.display();   */
 //	c3.setReal(4);
	cout<<c3.getReal();
}
