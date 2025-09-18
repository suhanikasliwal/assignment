#include<iostream>
using namespace std;
int main(){
    int num=26;
    bool a[26];
    for(int i=2;i<=25;i++){
        a[i]=false;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            a[i]=true;
            break;
        }
    }
    }
    cout<<"Prime numbers:"<<endl;
    for(int i=2;i<=25;i++){
    if(a[i]==false){
        cout<<i<<" ";
    }
    
    }
}