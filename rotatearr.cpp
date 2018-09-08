#include<iostream>
using namespace std;
int main(){
	int t,a[100],ar[100],i,j,k=0;
	cin>>t;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	while(t--){
		k=a[5-1];
		for(i=4;i>=0;i--){
			a[i+1]=a[i];
		}
		a[0]=k;
	}
	for(i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}
