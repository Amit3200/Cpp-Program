#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int>Q;
	stack<int>S;
	for(int i=1;i<=5;i++)
	Q.push(i);
	while(!Q.empty()){
		cout<<Q.front()<<"\n";
		int d;
		d=Q.front();
		S.push(d);
		Q.pop();
	}
	cout<<"\n Reversed \n\n";
	while(!S.empty()){
		//cout<<S.top()<<"\n";
		Q.push(S.top());
		S.pop();
	}
		while(!Q.empty()){
		cout<<Q.front()<<"\n";
		Q.pop();
	}
}
