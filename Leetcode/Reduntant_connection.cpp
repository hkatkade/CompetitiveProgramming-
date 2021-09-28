class Solution {
public:
    void union_sets(int a,int b,vector<int>& sizee,vector<int>& parent){
        a=find_set(a,parent);
        b=find_set(b,parent);
        if(a!=b){
            if(sizee[a]<sizee[b]){
                swap(a,b);
            }
            parent[b]=a;
            sizee[a]+=sizee[b];
        }
    }
    int find_set(int v,vector<int>& parent){
        if(v==parent[v]){
            return parent[v];
        }    
        return parent[v]=find_set(parent[v],parent);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& e) {
        int n=e.size();
        vector<int> parent(n+1,0),sizee(n+1,0);
        for(int i=1;i<=n;i++){
            parent[i]=i;
            sizee[i]=i;
        }
        vector<vector<int>> ans;
        bool cycle=false;
        for(auto &i:e){
            int u=i[0];
            int v=i[1];
            int x=find_set(u,parent),y=find_set(v,parent);
            if(x==y){
                cycle=true;
                ans.push_back({u,v});
            }
            else{
                union_sets(u,v,sizee,parent);
            }
        }
        return ans[ans.size()-1];
    }
};