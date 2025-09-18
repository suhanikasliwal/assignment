#include<iostream>
#include<string.h>
using namespace std;
class scopePublic{
    public:
    int no;
    char city[20];
    scopePublic(){
        cout<<"In class scopePublic"<<endl;
    }
    scopePublic(int no, char* city){
        this->no = no;
        strcpy(this->city, city);
    }
    void display(){
        cout<<"Number: "<<no;
        cout<<"\nCity: "<<city;
    }
};
int main(){
    char name[]="pune";
    scopePublic sp(1, name);
    sp.display();
}