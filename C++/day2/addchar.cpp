#include <string>
#include <iostream>
using namespace std;
    int main() {
        string s = "Initial";
        s += 'C';
        cout << s << endl;
        s += "++"; 
        cout << s << endl;
        return 0;
    }