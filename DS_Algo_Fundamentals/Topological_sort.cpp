#include<bits/stdc++.h>
using namespace std;
void hk(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
}
int main(){
    hk();
    int c = 0, n, m;
    cin >> n >> m;
    vector<vector<int>> g(n + 1);
    vector<int> indeg(n + 1, 0);
    for (int i = 0; i < m;i++){
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        indeg[v]++;
    }
    queue<int> q;
    for (int i = 0; i < n;i++){
        if(indeg[i]==0){
            q.push(i);
        }
    }
    vector<int> res;
    while(!q.empty()){
        c++;
        int curr = q.front();
        q.pop();
        res.push_back(curr);
        for(auto &i:g[curr]){
            indeg[i]--;
            if(indeg[i]==0){
                q.push(i);
            }
        }
    }
    if(c!=n){
        cout << "No topological sort/Cycle is present\n";
    }
    else{
        for(auto &i:res){
            cout << i << " ";
        }
    }
    return 0;
}
