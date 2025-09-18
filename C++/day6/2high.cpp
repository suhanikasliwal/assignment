#include<iostream>
using namespace std;
int main(){
    int max2,n;
    cout<<"enter number of element:\n";
    cin>>n;
    int* arr=new int[n];
    cout<<"enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1=arr[0];
    max2=arr[0];
    for(int j=0;j<n;j++){
        if(max1<arr[j]){
            max2 = max1;
            max1=arr[j];
        }
        if(arr[j]<max1 && arr[j]>max2){
            max2=arr[j];
        
        }   
     }
     
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }   
    for(int i=n-2;i>=0;i--){
    if(arr[i]<arr[i+1]){
        max1= arr[i];
        break;
    }
    }
    
    
    
    cout<<"second maximum number is: "<<max2<<endl;
    cout<<"second maximum number is: "<<max1<<endl;
}