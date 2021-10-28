class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto &i:nums){
            m[i]++;
        }
        int ans=0;
        for(auto &i:m){
            int n=i.second;
            ans+=((n-1)*(n))/2;
        }
        return ans;
    }
};