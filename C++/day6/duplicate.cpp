#include<iostream>
using namespace std;
bool isDuplicate(int n, int arr[]){
    bool b=false;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
    if(arr[i]==arr[j]){
         cout<<arr[i]<<" ";
         b=true;
    }
    }
}
return b;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int* arr = new int[n];
    cout<<"\nEnter elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n";
    if(isDuplicate(n, arr)){
        cout<<"Array contains duplicate element.";
    }
    else{
        cout<<"Array doesn't contain duplicate element.";
    };

}