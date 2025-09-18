#include<iostream>
using namespace std;
int main(){
    int n,r;
    cout<<"enter the number of elements:\n";
    cin>>n;
    int* arr=new int[n];
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the position from where u want to rotate:"<<endl;
    cin>>r;
    int prev=arr[n-1];
    for(int j=0;j<r;j++){
        prev=arr[n-1];
        for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];

    }
arr[0]=prev;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<"\t";
}
}