#include<iostream>
using namespace std;
int main(){
	int a[3][3];
	int a1[2];
	for(int i=0;i<=1;i++){
		cin>>*(a1+i);
	}
		for(int i=0;i<=1;i++){
		cout<<*(a1+i);
	}
		for(int i=0;i<=1;i++){
		cin>>a1[i];
	}
		for(int i=0;i<=1;i++){
		cout<<a[i];
	}
	
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cin>>*(*(a+i)+j);
		}
	}
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cout<<*(*(a+i)+j)<<"\t";
		}
		cout<<endl;
	}
		for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
