#include<iostream>
#include<string.h>
using namespace std;
int strcompare(char* s, char* s1){
while(*s1!='\0' && *s!='\0'){
    if(*s>*s1){
        return 1;
    }
    if(*s<*s1){
        return -1;
    }
    s1++;
    s++;
}
if(*s1!='\0' || *s!='\0'){
return -1;
}
return 0;
}
int main(){
    char str1[] = "suhani";
    char str2 []= "surani";
    int a = strcompare(str1, str2);
    if(a==0){
        cout<<"Strings are same"<<endl;
    }
    else{
        cout<<"Strings are not same"<<endl;
    }
}