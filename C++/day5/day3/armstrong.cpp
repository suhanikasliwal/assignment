#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0 && n>999){
        cout<<"Enter a number greater than zero and less than 999"<<endl;
    }
    else{
    int s=0;
    int num=n;
    while(n>0){
        int t = n%10;
        s+=(t*t*t);
        n/=10;
    }
    cout<<"the number is: ";
    if(num==s){
        cout<<"armstrong number";
    }
    else{
        cout<<"not an armstrong number";
    }
}
}