#include<iostream>
using namespace std;
void demo(){
    static int i=0;
    int sum=0;
    sum+=i;
    i++;
    cout<<sum<<endl;
}
int main(){
    for(int i=0;i<5;i++){
        demo();
    }
}