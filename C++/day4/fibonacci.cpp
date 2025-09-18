#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=3;
    int num1=0;
    int num2=1;
    int sum=num1+num2;
    if(n==1){
        cout<<0;
    }
    if(n>=2){
        cout<<0<<" ";
        cout<<1<<" ";
        while(count<=n){
        sum=num1+num2;
        cout<<sum<< " ";
        num1 = num2;
        num2 = sum;
        count++;   
        }
    }
}