#include<iostream>
using namespace std;
int main(){
    int arr1[3][3];
    cout<<"Enter matrix 1 elements:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>*(*(arr1+i)+j);
        }
    }
   
for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<*(*(arr1+i)+j)<<" ";
        }
        cout<<endl;
    }
cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cout<<*(*(arr1+j)+i)<<" ";
        }
        cout<<endl;
    }

}