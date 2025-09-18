#include<iostream>
using namespace std;
int main(){
    int max2;
    int arr[3][3];
    cout<<"enter elements:\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        
    }
    int max1=arr[0][0];
    max2=arr[0][0];
    for(int j=0;j<3;j++){
        for(int i=0;i<3;i++){
        if(max1<arr[j][i]){
            max2 = max1;
            max1=arr[j][i];
        }
        if(arr[j][i]<max1 && arr[j][i]>max2){
            max2=arr[j][i];
        
        }   
        }
    }
    cout<<"second maximum number is: "<<max2<<endl;

}