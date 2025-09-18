#include<iostream>
using namespace std;
void show();
int main(){
    show();
    show();
    show();
}
void show(){
    int x=0;
    static int y=0;
    cout<<y<<endl;
    cout<<x<<endl;
    x++;
    y++;
}