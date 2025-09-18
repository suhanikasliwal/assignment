#include<iostream>
using namespace std;
#define ADD(n1,n2) n1+n2;
inline bool evenodd(int num){
    return num%2==0;
}
int main(){
    int num=7;
    if(evenodd(num))
    cout<<"even";
    else
    cout<<"odd";
   int n3= ADD(100,100)
   cout<<"\n"<<n3;

}

