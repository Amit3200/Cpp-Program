#include<bits/stdc++.h>
using namespace std;
#define lld long long int
vector<lld> graph[100030];
bool visited[100030]={false};
vector<lld> check;
map<char,int> mp;
lld counter=0;
bool dragon=false;
void search(char key,string s){
//	cout<<"Search me  \n";
//	cout<<key<<" "<<s<<" \n";
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==key && mp[key]!=0){
			counter+=1;
			mp[key]-=1;
//			cout<<"Found "<<key<<" "<<s[i]<<" \n";
			return;
		}
	}
//	cout<<"Counter : "<<counter<<"\n";
}
void dfs(int node,string s,char parents[],int m){
	//cout<<"DFS";
	visited[node]=true;
	//cout<<node<<" : Node Value "<<graph[node].size()<<" \n";
	if(node==m){
		dragon=true;
	}
	if(dragon){
		check.push_back(node);
	}
	for(int i=0;i<graph[node].size();i++){
		if(!visited[graph[node][i]]){
//			cout<<"Adjancy Check : "<<graph[node][i]<<" \n";
			if(dragon){
			check.push_back(graph[node][i]);}
			dfs(graph[node][i],s,parents,m);	
		}
	}
}

void checker(string s,char parents[]){
	for(int i=0;i<check.size();i++){
	search(parents[check[i]],s);
	}
	cout<<s.length()-counter<<"\n";
	counter=0;
	check.clear();
	for(int i=0;i<100030;i++)visited[i]=false;
}

int main(){
	int n,q;
	cin>>n>>q;
	char parents[n+3];
	for(int i=1;i<=n;i++){
		cin>>parents[i];
		mp[parents[i]]+=1;
	}
	for(int i=0;i<n-1;i++){
		lld u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	while(q--){
	    dragon=false;
		int m;
		cin>>m;
		char krona[m+3];
		string s;
		cin>>s;
		dfs(1,s,parents,m);
		checker(s,parents);
	}
}
