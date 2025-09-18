#include<iostream>
using namespace std;
int strlen1(char*);
int main(){
    char str[25];
    cout<<"Enter a string: ";
    cin>>str;
    int len = strlen1(str);
    cout<<"\nLength of string: "<<len;
    cout<<"\nLength os string using sizeof() operator: "<<(sizeof(str)/sizeof(str[0]));
}
int strlen1(char* s1){
    int i=0;
    while(*s1!='\0'){
        i++;
        s1++;
    }
    return i;
}
