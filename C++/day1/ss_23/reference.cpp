#include<iostream>
using namespace std;
void swap(int& p,int& q){
    int temp;
    temp=p;
    p=q;
    q=temp;
}
int main(){
	int a=1, b=2;
	cout<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
}
