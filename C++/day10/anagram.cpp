#include<iostream>
using namespace std;
int main(){
    char str[] = "pune"; // anagram is same letters in the word occuring same numbr of times
    char str1[] = "unpe";
    int arr[26] = {0}; // initialize all elements to 0
    int arr1[26] = {0};
    bool an = true;
    for(int i=0;str[i]!='\0';i++){ // '\0' is last character
    arr[str[i]-'a'] += 1; // if str[i] = 'p' then ascii value of P - ascii value of 'a'
    } 
    for(int i=0;str1[i]!='\0';i++){
        arr1[str1[i]-'a'] += 1; // this will help us to track the number of times a character has occured in the string
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=arr1[i]){
            an = false;
        }
    }
    cout<<an<<endl;
}