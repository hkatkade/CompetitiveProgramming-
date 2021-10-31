class Solution {
public:
    void subtreenodes(vector<vector<int>>&g,int n,int node,vector<int>& count,int par){
        count[node]=1;
        for(auto &i:g[node]){
            if(i==par){
                continue;
            }
            subtreenodes(g,n,i,count,node);
            count[node]+=count[i];
        }
    }
    int countHighestScoreNodes(vector<int>& p) {
       int n=p.size();
        vector<vector<int>> g(n);
        for(int i=1;i<n;i++){
            g[p[i]].push_back(i);
            g[i].push_back(p[i]);
        }
        int ans=INT_MIN;
        unordered_map<long long,int> m;
        vector<int> count(n,0);
        subtreenodes(g,n,0,count,0);
        vector<vector<int>> child(n);
        for(int i=1;i<n;i++){
            child[p[i]].push_back(i);
        }
        int res=0;
        for(int i=0;i<n;i++){
            long long child1=1,child2=1;
            if(child[i].size()>0){
                if(child[i].size()>=1)child1=count[child[i][0]],child2=(child[i].size()>1?count[child[i][1]]:1);
            }
            m[child1*child2*max(1LL,(long long)(p.size()-count[i]))]++;
        
        }
        long long cnt=-1;
        for(auto [x,y]:m){
            cnt=max(cnt,x);
        }
        return m[cnt];
    }
};