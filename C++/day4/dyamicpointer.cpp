#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of items: ";
    cin>>n;
    int *ptr = new int[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }
    cout<<"\nElements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<"\t";
    }
    delete[] ptr;
}