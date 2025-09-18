#include<iostream>
using namespace std;
enum monthsnum{
    JAN = 1,
    FEB,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULLY,
    AUG,
    SEPT,
    OCT,
    NOV,
    DEC
};
int main(){
    int num;
    cout<<"enter the number between 1 to 12:"<<endl;
    cin>>num;
    switch(num){
        case 1:
        cout<<"January"<<endl;
        break;
        case 2:
        cout<<"February"<<endl;
        break;
        case 3:
        cout<<"March"<<endl;
        break;
        case 4:
        cout<<"April"<<endl;
        break;
        default: 
        cout<<"Enter a number between 1 to 12"<<endl;
        break;
    }
}