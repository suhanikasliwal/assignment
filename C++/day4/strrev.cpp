#include<iostream>
using namespace std;
void str1rev(char* ch){
    int i=0;
int j=0;
while(ch[i]!='\0'){
    i++;
}
i--;
for(j=0;j<(i/2);j++){
    int temp = ch[i];
    ch[i] = ch[j];
    ch[j] = temp;
    i--;
}
cout<<ch;
}
int main(){
    char ch[50];
    cout<<"Enter a string: ";
    cin>>ch;
    str1rev(ch);
}