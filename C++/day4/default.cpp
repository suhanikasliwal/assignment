#include<iostream>
using namespace std;
void add(int=1,int=2,int=3);
int main(){
    add();
}
void add(int a,int b,int c){
    cout<<"sum:"<<a+b+c;


}