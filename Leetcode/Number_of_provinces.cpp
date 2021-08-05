#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int find_set(int v,vector<int>& parent){
        if(-1==parent[v]){
            return v;
        }
        return parent[v] = find_set(parent[v],parent);
    }
    void union_sets(int a,int b,vector<int>& parent,vector<int>& sizee){
        a = find_set(a,parent);
        b = find_set(b,parent);
        if(a!=b){
            if(sizee[a]<sizee[b]){
                swap(a, b);
            }
            parent[b]=a;
            sizee[a] += sizee[b];
        }
    }
    int findCircleNum(vector<vector<int>>& g) {
        int n = g.size();
        int ans = 0;
        vector<int> parent(n + 1, -1);
        vector<int> sizee(n + 1, 1);
        for (int i = 0; i < n;i++){
            for (int j = 0; j < n;j++){
                if(g[i][j]==1){
                    int a = find_set(i,parent);
                    int b = find_set(j,parent);
                    if(a!=b){
                        ans++;
                        union_sets(a, b, parent, sizee);
                    }
                }
            }
        }
        return n-ans;
    }
};