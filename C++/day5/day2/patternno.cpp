#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=1;j<i+1;j++){
            cout<<j;
        }
        for(int j=1;j<i;j++){
            cout<<j;
        }
 cout<<endl;
    }
}
