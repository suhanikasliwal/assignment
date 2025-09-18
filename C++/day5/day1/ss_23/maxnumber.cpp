#include<iostream>
using namespace std;
int main(){
	int a[5],i;
	for(i=0;i<=4;i++){
		cin>>*(a+i);
		
	}
	int max=*(a+0);
	for(i=1;i<=4;i++){
		if(max<*(a+i)){
			max=*(a+i);
		}
	}
	cout<<"max element is:"<<max;
}
