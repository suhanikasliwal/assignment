#include<iostream>
using namespace std;
int main(){
	int n=0;
	char s[10];
	bool val=true;
	cout<<"Enter a string: ";
	cin>>s;
	for(int i=0;s[i]!='\0';i++){
		n++;
	}
	n--;
	int size = n;
	for(int i=0;i<size;i++){
			if(s[i]!=s[n]){
			val=false;
			break;
		}
		n--;
	}
	
	
	cout<<val;
}
