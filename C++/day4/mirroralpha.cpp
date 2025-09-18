#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        int m=0;
        for(int y=0;y<n-i-1;y++)
{
cout<<" ";
}   
for(int j=0;j<i;j++){
    cout<<(char)(j+65);
}
for(int y=i;y>=0;y--){
    cout<<(char)(y+65);

}
cout<<endl;
 }
}