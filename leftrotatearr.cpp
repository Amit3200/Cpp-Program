#include<iostream>
using namespace std;
int reverser(long long int *a,long long int s,long long int r){
	while(s<r){
		a[s]=a[s]+a[r]-(a[r]=a[s]);
		s++;
		r--;
	}
}
int main(){
	long long int a[10000],t,i,j,k,s;
	cin>>s>>t;
		for(i=0;i<s;i++){
			cin>>a[i];
		}
//	while(t--){
//		k=a[0];
//		for(i=0;i<s-1;i++){
//			a[i]=a[i+1];
//		}
//		a[s-1]=k;
//	}
//	for(i=0;i<s;i++){
//		cout<<a[i]<<" ";
//	}
	reverser(a,0,t-1);
	reverser(a,t,s-1);
	reverser(a,0,s-1);
	for(i=0;i<s;i++){
	cout<<a[i]<<" ";
	}
}
