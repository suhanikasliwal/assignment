#include<iostream>
using namespace std;

void stringcpy(char*, char*);
int main(){
char str1[10];
char str2[20];
cout<<"Enter a string: ";
cin>>str1;
cout<<"Enter a string: ";
cin>>str2;
stringcpy(str1, str2);
cout<<str2<<endl;
cout<<str1<<endl;
}
void stringcpy(char* s1, char* s2){
    while(*s1!='\0'){
        s1++;
    }
    while(*s2!='\0'){
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1='\0';
}