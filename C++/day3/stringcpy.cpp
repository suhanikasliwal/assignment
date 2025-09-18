#include<iostream>
using namespace std;

void stringcpy(char*, char*);
int main(){
char str1[10];
char str2[10];
cout<<"Enter a string: ";
cin>>str1;
stringcpy(str1, str2);
cout<<str1<<endl;
cout<<str2<<endl;
}
void stringcpy(char* s1, char* s2){
    while(*s1!='\0'){
        *s2 = *s1;
        s1++;
        s2++;
    }
    *s2='\0';
}