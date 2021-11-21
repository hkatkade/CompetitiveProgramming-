#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumSemesters(int n, vector<vector<int>>& relations){
        vector<int> g[n];
        vector<int> indeg(n, 0);
        for(auto &i:relations){
            g[i[0]].push_back(i[1]);
            indeg[i[1]]++;
        }
        queue<int> q;
        for (int i = 0; i < n;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        int c = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            indeg[node]--;
            for(auto &i:g[node]){
                c++;
                indeg[i]--;
                if(indeg[node]==0){
                    q.push(i);
                }
            }
        }
        return n == c ? c : -1;
    }    

};