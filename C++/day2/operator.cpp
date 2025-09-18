#include<iostream>
using namespace std;
class student{
    int rollno;
    string dob;
    int marks[5];
    int tot;
    public:
    void accept(){
        tot=0;
        cout<<"Enter roll no.: ";
        cin>>rollno;
        cout<<"\nEnter DOB: ";
        cin>>dob;
        cout<<"Enter Marks in each subject"<<endl;
        for(int i=0;i<5;i++){
            cout<<"Enter marks in subject"<<i<<": ";
            cin>>marks[i];
            tot+=marks[i];
        }
    }
    void display(){
        cout<<"\nStudent rollno.: "<<rollno<<endl;
        cout<<"DOB.: "<<dob<<endl;
        cout<<"Total marks obtained: "<<tot<<endl;
    }
};
int main(){
    student s[10];
    for(int i=0;i<10;i++){
        s[i].accept();
    }
    for(int i=0;i<10;i++){
        s[i].display();
    }
}