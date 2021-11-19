// Detect negative cycles in weighted graph
// Time complexity : O(VE)
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int u, v, w;
        Node(int u,int v,int w){
            this->u = u;
            this->v = v;
            this->w = w;
        }
};
int main(){
    int n, m, src;
    cin >> n >> m >> src;
    vector<Node> g;
    for (int i = 0; i < m;i++){
        int u, v, w;
        cin >> u >> v >> w;
        g.push_back(Node(u, v, w));
    }
    int inf = 1000000009;
    vector<int> dist(n, inf);
    dist[src] = 0;

    for (int i = 0; i < n;i++){
        for(auto &i:g){
            if(dist[i.u]+i.w<dist[i.v]){
                dist[i.v] = dist[i.u] + i.w;
            }
        }
    }
    bool ok = true;
    for(auto &i:g){
        if(dist[i.u]+i.w<dist[i.v]){
            ok=false;
            cout << "Negative cycle present\n";
            break;
        }
    }
    if(ok){
        for (int i = 0; i < n;i++){
            cout << dist[i] << " ";
        }
    }
    return 0;
}