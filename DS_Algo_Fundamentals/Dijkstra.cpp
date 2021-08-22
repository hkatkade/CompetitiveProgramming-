#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
const int inf = 1e7;
int main(){
    int source, n, m;
    cin >> n >> m;
    vector<int> dist(n + 1, inf);
    vector<int> l(n +1,inf);
    vector<vector<pair<int, int>>> g(n + 1);
    for (int i = 0; i < m;i++){
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[u].push_back({u, w});
    }
    cin >> source;
    dist[source] = 0;
    l[source]=0;
    set<pair<int, int>> s;
    // weight vertex
    s.insert({0, source});
    while(!s.empty()){
        auto x = *(s.begin());
        s.erase(x);
        for(auto &i : g[x.second]){
            if(dist[i.first]>dist[x.second]+i.second){
                s.erase({dist[i.first], i.first});
                dist[i.first] = dist[x.second] + i.second;
                l[i.first]=l[x.second]+1;
                s.insert({dist[i.first], i.first});

            }
        }
    }
    for (int i = 1; i <= n;i++){
        if(dist[i]<inf){
            cout << dist[i] << " ";
        }
        else{
            cout << -1 << " ";
        }
    }
    cout << endl;
    for (int i = 1; i <= n;i++){
        if(dist[i]<inf){
            cout << l[i] << " ";
        }
        else{
            cout << -1 << " ";
        }
    }
    return 0;  
}
• Writing Quantitative trading algorithms and back-testing to generate alpha
• Extracting, analyzing and interpreting a variety of data
• Analyse large financial data sets to identify trading opportunities
• Design, back-testing and implementation of strategies
• A dedicated Python expert for proprietary/discretionary traders enrolled in firm’s exclusive Quantitative trading
program.