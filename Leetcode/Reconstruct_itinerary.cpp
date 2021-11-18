class Solution {
public:
    unordered_map<string,priority_queue<string,vector<string>,greater<string>>> m;
    vector<string> ans;
    void dfs(string src){
        while(!m[src].empty()){
            auto curr=m[src].top();
            m[src].pop();
            dfs(curr);
        }
        ans.push_back(src);
        return;
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for(auto &i:tickets){
            m[i[0]].push(i[1]);
        }
        dfs("JFK");
        reverse(ans.begin(),ans.end());
        return ans;
    }
};s