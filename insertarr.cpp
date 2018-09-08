#include<iostream>
using namespace std;
long long int f=0;
int insertion(long long int *a,long long int p,long long int k,long long int n){
	long long int i;
	for(i=n;i>=p;i--){
	a[i+1]=a[i];
	}
	a[p]=k;
	n+=1;
	cout<<"\n";
	return n;
}

int deletion(long long int *a,long long int p,long long int n){
	long long int i;
	for(i=p;i<n;i++){
	a[i]=a[i+1];
	}
	n-=1;
	cout<<"\n";
	return n;
}

int search(long long int *a,long long int k,long long int n){
	long long int i;
	for(i=0;i<n;i++){
	if(a[i]==k){
		f=1;
		return i;
	}
	}
	cout<<"\n";
}

int swapper(long long int *a,long long int n){
	long long int i;
	for(i=0;i<n/2;i++){
		a[n-i-1]=a[i]+a[n-i-1]-(a[i]=a[n-i-1]);
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";}
	cout<<"\n";
	
}
int main(){
	long long int n,i,p=0,k;
	cin>>n;
	long long int a[n*n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\n";
	swapper(a,n);
	cout<<"\nEnter the index to enter : ";
	cin>>p;
	if(p>n+1){
		goto A;
	}
	cout<<"\nEnter the value to enter : ";
	cin>>k;
	n=insertion(a,p,k,n);
		for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter the index to enter (delete) : ";
	cin>>p;
	if(p>n+1){
		goto A;
	}
	n=deletion(a,p,n);
			for(i=0;i<n;i++){
		cout<<a[i]<<" ";}
	long long int o,q;
	cout<<"\nEnter number to search : ";
	cin>>o;
	q=search(a,o,n);
	if(f==0){
		cout<<"\nNot Found";
	}
	else{
		cout<<"\nFound at "<<q;
	}
	A:
		if(p>n+1){
			cout<<"\nAccess Denied";
		}
}
