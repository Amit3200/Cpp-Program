#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int>Q;
	for(int i=1;i<=5;i++)
	Q.push(i);
	while(!Q.empty()){
		cout<<Q.front()<<"\n";
		Q.pop();
	}
	cout<<"SIZE : "<<Q.size();
}
