#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int> graph[],int n,int k){
    int visited[n+5];
    int distance[n+5];
    for(int i=0;i<n+4;i++){
        visited[i]=-1;
        distance[i]=-1;
    }
    visited[k]=1;
    distance[k]=0;
    queue<int> q;
    q.push(k);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(int i=0;i<graph[node].size();i++){
            if(visited[graph[node][i]]==-1){
                visited[graph[node][i]]=1;
                distance[graph[node][i]]=6+distance[node];
                q.push(graph[node][i]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(i==k){
            continue;
        }
        else{
            cout<<distance[i]<<" ";
        }
    }
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> graph[n+5];
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int k;
        cin>>k;
        bfs(graph,n,k);
    }
}
