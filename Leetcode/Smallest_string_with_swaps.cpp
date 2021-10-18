class Solution {
public:
    void dfs(vector<vector<int>>& g,vector<int>& v,vector<int>& vis,int node){
        vis[node]=1;
        v.push_back(node);
        for(auto &i:g[node]){
            if(vis[i]==0){
                dfs(g,v,vis,i);
            }
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& p) {
        int n=p.size(),m=s.size();
        vector<vector<int>> g(m+1);
        for(auto &i:p){
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        string res(m,'0');
        vector<int> vis(m+1,0);
        for(int i=0;i<m;i++){
            vector<int> v;
            if(vis[i]==0){
                dfs(g,v,vis,i);
            }
            string a="";
            for(auto &k:v){
                a+=s[k];
            }
            sort(a.begin(),a.end());
            sort(v.begin(),v.end());
            for(int j=0;j<v.size();j++){
                res[v[j]]=a[j];
            }
        }
        return res;
    }
};