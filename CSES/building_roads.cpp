#include<bits/stdc++.h>
using namespace std;
vector<int> a[100001];
int vis[100001];
int n, m;
void dfs(int node){
	vis[node]=1;
    
	for(int i=0;i<a[node].size();i++){
		if(!vis[a[node][i]]){
			dfs(a[node][i]);
		}
	}
}
int main()
{
    int cc=0, x, y, already_vis=0;
    cin >> n >> m;
    vector<int> ans;
    for (int i = 0; i < m;i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for (int i = 1; i <= n;i++){
            if(!vis[i]){
            dfs(i);
            cc++;
            ans.push_back(i);
        }
    }
    cout << (cc - 1) << "\n";
    int u = ans[0],v;
    for (int i = 1; i < cc;i++){
        v = ans[i];
        cout << u << " " << v << "\n";
    }
    return 0;
}