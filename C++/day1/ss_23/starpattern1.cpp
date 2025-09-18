#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter number of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int y=n-i;y>0;y--){
			cout<<" ";
		}
		for(int j=i;j<i+1;j++){
			cout<<"*";
		}
		for(int k=0;k<i;k++){
			cout<<"*";
		}    
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		
	
	
		for(int y=1;y<i;y++){
			cout<<" ";
		}
		for(int j=n-i+1;j>0;j--){
			cout<<"*";
		}
		for(int k=n-i;k>0;k--){
			cout<<"*";
		}    
		cout<<endl;
	}
}
