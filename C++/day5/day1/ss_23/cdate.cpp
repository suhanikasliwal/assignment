#include<iostream>
using namespace std;
class CDate{
	int dd;
	int mm;
	int yy;
	public:
		void accept(int, int, int);
		void display();
		void setDate();
};
void CDate::accept(int d, int m, int y){
	dd = d;
	mm= m;
	yy = y;
}
void CDate::display(){
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}
void CDate::setDate(){
	int d;
	cout<<"enter date";
	cin>>d;
	dd = d;
} 
int main(){
	CDate o;
	o.accept(4, 11, 2003);
	o.display();
    o.setDate();
    o.display();
}
