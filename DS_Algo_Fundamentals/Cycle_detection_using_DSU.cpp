#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 6;
vector<int> parent(N);
vector<int> sizee(N);

void make_set(int v){
    parent[v] = v;
    sizee[v] = 1;
}
int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    // path compression
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a,int b){
    a = find_set(a);
    b = find_set(b);
    // if sets are different 
    if(a!=b){
        if(sizee[a]<sizee[b]){
            swap(a, b);
        }
        parent[b] = a;
        sizee[a] += sizee[b];
    }
}
int main(){
    for (int i = 0;i<N;i++){
        make_set(i);
    }
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edges;
    for (int i = 0; i < m;i++){
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }
    bool cycle = false;
    for(auto &i:edges){
        int u = i[0];
        int v = i[1];
        int x = find_set(u);
        int y = find_set(v);
        if(x==y){
            cycle = true;
        }
        else{
            union_sets(u, v);
        }
    }
    if(cycle){
        cout << "Cycle is found\n";
    }
    else{
        cout << "Does not have a cycle\n";
    }
    return 0;
}