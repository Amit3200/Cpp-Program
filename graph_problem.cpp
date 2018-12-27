#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> graph[n+10];
	int dist[n+4];
	for(int i=1;i<n;i++){
		int k1;
		cin>>k1;
		//cout<<k1;
		dist[i]=k1;
		if(k1==1){
			graph[i].push_back(i+1);
		}
		else{
			graph[i+1].push_back(i);
		}
	}
	int q;
	cin>>q;
	//cout<<"hello"<<q;
	while(q--){
		string ch;
		cin>>ch;
		if(ch=="Q"){
			int v;
			cin>>v;
			int ans=0;
			bool visited[n+3];
			for(int i=0;i<n+2;i++){
				visited[i]=false;
			}
			visited[v]=true;
			queue<int> q;
			q.push(v);
			while(!q.empty()){
				int node=q.front();
				q.pop();
				for(int i=0;i<graph[node].size();i++){
					visited[graph[node][i]]=true;
					ans+=1;
					q.push(graph[node][i]);
				}
			}
			cout<<ans+1<<"\n";
		}
		else{
			for(int i=0;i<n+1;i++){
				graph[i].clear();
			}
			for(int i=1;i<n;i++){
				if(dist[i]==1){
				graph[i+1].push_back(i);	
				}
				else{
				graph[i].push_back(i+1);
				}
			}
		}
	}
}
