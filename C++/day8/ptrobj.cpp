#include<iostream>
#include<string.h>
using namespace std;
class String1{
    int lenght;
    char* ptr;
    public:
    String1(){
        lenght = 1;
        ptr = new char;
        *ptr = 'A';
    }
    String1(char* sptr){
        lenght = strlen(sptr);
        ptr = new char[lenght+1];
        strcpy(ptr, sptr);
    }
    String1(int lenght){
        this->lenght = lenght;
        cout<<"Enter a string"<<endl;
        ptr = new char[lenght+1];
        cin>>ptr;
    }
    void display(){
        if(lenght==1){
        cout<<"Lenght: "<<lenght<<endl;
        cout<<"String: "<<*ptr<<endl;
        return;
        }
        cout<<"Lenght: "<<lenght<<endl;
        cout<<"String: "<<ptr<<endl;
    }
};
int main(){
    char s2[]="Pune";
    String1 s(s2);
    String1 s1(4);
    s.display();
    s1.display();
    String1 s3;
    s3.display();
}