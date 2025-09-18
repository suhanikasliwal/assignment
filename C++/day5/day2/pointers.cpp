#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int y=0;
    int carry=0;
    int num=0;
    char s1[5]="0011";
    char s2[5]="0101";
    for(int i=3;i>=0;i--){
    if(s1[i]=='1' && s2[i]=='0' && carry==0){
    carry=0;
    num=pow(2, y)*(s1[i]-'0')+(s2[i]-'0')+carry;
    }
     if(s1[i]=='1' && s2[i]=='1' && carry==0){
    carry=1;
    num=pow(2, y)*(s1[i]-'0')+(s2[i]-'0')+carry;
    }
     if(s1[i]=='1' && s2[i]=='1' && carry==1){
    carry=0;
     num=pow(2, y)*(s1[i]-'0')+(s2[i]-'0')+carry;
    }
    if(s1[i]=='1' && s2[i]=='0' && carry==1){
    carry=0;
     num=pow(2, y)*(s1[i]-'0')+(s2[i]-'0')+carry;
    }
     if(s1[i]=='0' && s2[i]=='1' && carry==0){
    carry=0;
     num=pow(2, y)*(s1[i]-'0')+(s2[i]-'0')+carry;
    }
     if(s1[i]=='0' && s2[i]=='0' && carry==1){
    carry=0;
     num=pow(2, y)*(s1[i]-'0')+(s2[i]-'0')+carry;
    }
    if(s1[i]=='0' && s2[i]=='1' && carry==1){
    carry=1;
     num=pow(2, y)*(s1[i]-'0')+(s2[i]-'0')+carry;
    }
    y++;
    }
    cout<<num;
}