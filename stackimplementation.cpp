#include<iostream>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;

//int stack[50],top=-1;
//void push(){
//	int n,p;
//	cout<<"\n Enter the number to enter in the stack - ";
//	cin>>n;
//	if(top==5){
//	cout<<"\n- .  Overflow\n";	
//	}
//	else{
//		cout<<"\n- .  "<<n<<" is inserted \n";
//		stack[++top]=n;
//	}
//	cin>>p;
//}
//
//void pop(){
//	int p;
//	if(top==-1){
//		cout<<"\n- .  Underflow\n";
//		top=-1;
//	}
//	else{
//		cout<<"\n- .  "<<stack[top]<<" is popped \n";
//		top--;
//	}
//	cin>>p;
//}
//
//int main(){
//	int k;
//	while(true){
//		system("cls");
//		cout<<"\n1 .  Push \n";
//		cout<<"\n2 .  Pop  \n";
//	cout<<"- ";
//	cin>>k;
//	if(k==1){
//		push();
//	}
//	else if(k==2){
//		pop();
//	}
//	}
//}
stack<int> s;
void recursive(int n,int total){

	if(total==n/2+1||n==0)
		return;
	int ele=s.top();
	s.pop();
	recursive(n,total+1);
	if(total!=n/2)
		s.push(ele);
}

int main(){
	for(int i=1;i<=5;i++){
		s.push(i);
	}
	recursive(s.size(),0);
	while(!s.empty()){
		cout<<s.top()<<"\n";
		s.pop();
	}
}
