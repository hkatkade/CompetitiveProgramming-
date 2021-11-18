class Solution{
    public:
    string ans="";
    void dfs(vector<vector<int>> &g,vector<int> &vis,int src){
        vis[src]=1;
        for(auto &i:g[src]){
            if(vis[i]==0){
                dfs(g,vis,i);
            }
        }
        char a=src+'a';
        ans=a+ans;
    }
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<vector<int>> g(K);
        for(int i=0;i<N-1;i++){
            string a=dict[i],b=dict[i+1];
            for(int j=0;j<min(a.size(),b.size());j++){
                if(a[j]!=b[j]){
                    g[a[j]-'a'].push_back(b[j]-'a');
                    break;
                }
            }
        }
        vector<int> vis(K,0);
        for(int i=0;i<K;i++){
            if(vis[i]==0){
                dfs(g,vis,i);
            }
        }
        return ans;
    }
    
};
