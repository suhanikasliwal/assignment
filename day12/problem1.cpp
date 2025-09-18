#include<iostream>
#include<string.h>
#include<vector>
#include<iomanip>
#include<stdexcept>
#include<fstream>
using namespace std;

class Item{

public:
int itemID;
string itemName;
float price;
int stockQuantity;

Item();

void addItem(){
    cout<<"\nEnter item id: ";
    cin>>itemID;
    cout<<"\nEnter item name: ";
    cin>>itemName;
    cout<<"\nEnter price: ";
    cin>>price;
    cout<<"\nStock quantity: ";
    cin>>stockQuantity;
}
    
};
Item::Item(){

}
class Bill{
    public:
static int billID;
string customerName;
vector<Item> pur;

Bill();
void customDetails(){
    cout<<"Bill ID: "<<billID<<endl;;
    cout<<"Enter customer name: ";
    cin>>customerName;
    cout<<endl;
}
void fileAdd(Bill&);
void operator+(Item&);

friend ostream& operator<<(ostream&, const Bill&);
};
int Bill::billID;
Bill::Bill(){
++billID;
}
void Bill::operator+(Item& item){
    if(item.stockQuantity<=0){
        throw runtime_error("Stock is finished");
    }
    pur.push_back(item);
    item.stockQuantity--;
}
ostream& operator<<(ostream& o, const Bill& bill){float tot=0;
if(bill.pur.empty()){
throw runtime_error("Add items to generate bill");
}
o<<"Bill"<<endl;
o<<"Bill ID: "<<bill.billID<<"\t";
o<<"Customer Name"<<bill.customerName<<endl;
for(auto item: bill.pur){
    o<<item.itemID<<"\t"<<item.itemName<<"\t"<<item.price<<endl;
    tot+=item.price;
}
cout<<"Total: "<<tot<<endl;
return o;
}
void Bill::fileAdd(Bill& bill){
    float tot=0.0;
    ofstream addBill("billInfo.txt", ios::app);
    addBill<<"Bill Data"<<endl;
    addBill<<"\nBill ID: "<<bill.billID<<"\t"<<bill.customerName<<endl;
    addBill<<"Item ID"<<"\t"<<"Item Name"<<"\t"<<"Item Price"<<endl;
    for(Item i: bill.pur){
        addBill<<i.itemID<<"\t"<<i.itemName<<"\t"<<i.price<<endl;
        tot +=i.price;
    }
    addBill<<"--------------------------------------------------------------------"<<endl;
    addBill<<"Total: "<<tot<<endl;
}
int main(){
    Item i1, i2, i3;
    i1.addItem();
    i2.addItem();
    i3.addItem();
    Bill b;
    b.customDetails();
    try{
        b + i1;
        b + i2;
        b + i3;
        cout<<b;
        b.fileAdd(b);
    }
    catch(const exception& e){
        cerr<<e.what()<<endl;
    }
}

