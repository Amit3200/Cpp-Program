#include<bits/stdc++.h>
using namespace std;
void rec(queue<int>&Q){
	if(Q.empty()){
		//cout<<"\n End \n";
		return;
	}
		int d=Q.front();
		Q.pop();
		rec(Q);
		Q.push(d);
}

int main(){
	queue<int> Q;
	for(int i=1;i<=5;i++){
		Q.push(i);
	}
	rec(Q);
	while(!Q.empty()){
		cout<<Q.front()<<"\n";
		Q.pop();
	}

}
