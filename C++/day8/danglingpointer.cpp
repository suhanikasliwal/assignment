#include<iostream>
#include<string.h>
using namespace std;

class Deep {
    int id;
    char* name;
public:
    Deep() {
        id = 1;
        name = new char[7];
        strcpy(name, "Suhani");
    }

    Deep(Deep& d) {
        this->id = d.id;
        this->name = d.name;
    }

    ~Deep() {
        delete[] name;
        name = NULL;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }
};

int main() {
    Deep d;
    d.display();
    {
        Deep d1(d);
        d1.display(); 
    } 
    d.display(); 
}
