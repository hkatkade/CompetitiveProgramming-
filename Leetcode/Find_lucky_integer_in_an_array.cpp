class Solution {
public:
    int findLucky(vector<int>& a) {
        unordered_map<int,int> m;
        for(auto &i:a){
            m[i]++;
        }
        int ans=INT_MIN;
        for(auto &i:m){
            if(i.first==i.second){
                ans=max(ans,i.second);
            }
        }
        return ans==INT_MIN?-1:ans;
    }
};