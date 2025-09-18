#include<iostream>
#include<cstring>
using namespace std;
void toggle1(char* str){
    for(int i=0;i<strlen(str);i++){
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
        else{
            str[i] = toupper(str[i]);
        }
    }
    cout<<str<<endl;
}
void toggle(char* str){
int small=97;
int capital =65;
for(int i=0;str[i]!='\0';i++){
    int num = str[i];
    if(num>=65 && num<=91){
        str[i]+=32;
    }
    else{
        str[i]-=32;
    }
}
cout<<str<<endl;
}
int main(){
    char str[]="IETPune";
    toggle(str);
    char str1[50];
    cin>>str1;
    toggle1(str1);
}