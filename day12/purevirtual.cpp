#include<iostream>
using namespace std;
class Top{
    int id;
    public:
    Top(){
        cout<<"Default of Top"<<endl;
    }
    Top(int id){
        this->id = id;
    }
    int getId(){
        return id;
    }
};
class Left: public Top{
int salary;
public:
Left(){
    cout<<"Default Constructor of Left"<<endl;
}
void getSalary(){
    cout<<"Enter salary: ";
    cin>>salary;
}
};
class Right: public Top{
    protected: 
    char name[50];
    public:
    Right(){
        cout<<"Default of constructor right"<<endl;
    }
    void getDetails(){
        cout<<"Enter name: ";
        cin>>name;
    }
};
class Bottom: public Right, public Left{
    public:
    char location[20];
    int inc;
    char* desig;
    Bottom(){
        cout<<"Constructor of Bottom"<<endl;
    }
    void getDetails(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"\nEnter Location: ";
        cin>>location;
        cout<<"\nEnter Designation: ";
        cin>>desig;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Location: "<<location<<endl;
        cout<<"Designation: "<<desig;
    }
};
int main(){
    Bottom b;
    b.getDetails();
    b.display();
}