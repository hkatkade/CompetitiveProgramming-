#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
int vis[100001];
void dfs(int node){
	vis[node]=1;
	for(int i=0;i<adj[node].size();i++){
		if(!vis[adj[node][i]]){
			dfs(adj[node][i]);
		}
	}
}
int main()
{
	int ans=0,a,b,n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			dfs(i);
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}

/*void dfs(int node){
	vis[node]=1;
	for(int child:adj[node]){
		if(!vis[child]){
			dfs(child);
		}
	}
}*/