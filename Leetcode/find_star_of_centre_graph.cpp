class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        int n=e.size()+1;
        vector<vector<int>> g(n+1);
        for(int i=0;i<e.size();i++){
            g[e[i][0]].push_back(e[i][1]);
            g[e[i][1]].push_back(e[i][0]);
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(g[i].size()==n-1){
                ans=i;
                break;
            }
        }
        return ans;
    }
};


