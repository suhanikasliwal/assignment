#include<iostream>
#include<string.h>
using namespace std;
class string1{
    int len;
    char* ptr;
    public:
    ~string1(){
        if(ptr)
        delete[] ptr;
        ptr=nullptr;
    }
    string1(){
        len=1;
        ptr=new char;
        *ptr='A';
    }
    string1(char* sptr){
        len=strlen(sptr);
        this->ptr=new char[len+1];
        strcpy(this->ptr,sptr);
    }
    string1(string1& s){
        this->len=s.len;
        this->ptr=new char[this->len+1];
        strcpy(this->ptr,s.ptr);
    } 
    void display(){
        cout<<"length is:"<<len<<endl;
        cout<<"string is:"<<ptr<<endl;    }
        void operator=(string1& s){
            this->len = s.len;
            this->ptr=new char[this->len+1];
            strcpy(ptr,s.ptr);
        }
};
int main(){
    string1 s1();
    char arr[]="srushti";
    string1 s2(arr);
    {
    string1 s3(s2);
    s3.display();
    }
    s2.display();
    
}
