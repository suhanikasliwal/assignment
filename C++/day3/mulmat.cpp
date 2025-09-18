#include<iostream>
using namespace std;
int main(){
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    cout<<"Enter matrix 1 elements:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>*(*(arr1+i)+j);
        }
    }
    cout<<"\nEnter matrix 2 elements: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>*(*(arr2+i)+j);
        }
    }
    cout<<"Multiplication:\n";
  /*   for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            *(*(arr3+i)+j)+=  (*(*(arr1+i)+j)) * (*(*(arr2+j)+i));
            
        cout<<*(*(arr3+i)+j)<<" ";
        }
        cout<<endl;
    } */
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr3[i][j]=0;
            for(int y=0;y<3;y++){
            arr3[i][j] += arr2[i][y] * arr1[y][j];
            }
                cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

}