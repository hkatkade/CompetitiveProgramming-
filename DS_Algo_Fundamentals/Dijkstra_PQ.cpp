#include<bits./stdc++.h>
using namespace std;
int main(){
    int n, m, u, v, w;
    cin >> n >> m;
    vector<pair<int, int>> g[n + 1];
    for (int i = 0; i < m;i++){
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n + 1, 1e6);
    // distance vertex 
    pq.push({0, 0});
    dist[0] = 0;
    while(!pq.empty()){
        int curr = pq.top().second;
        int curr_d = pq.top().first;
        pq.pop();

        for(pair<int,int> edge:g[curr]){
            if(curr_d + edge.second < dist[edge.first]){
                dist[edge.first] = curr_d + edge.second;
                pq.push({dist[edge.first], edge.first});
            }
        }
    }
    for (int i = 0; i <= n;i++){
        cout << dist[i] << " ";
    }
    cout << endl;
    return 0;
}