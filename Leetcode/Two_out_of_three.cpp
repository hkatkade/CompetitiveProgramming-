class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, unordered_set<int>> map;
        for(auto& i : nums1) map[i].insert(1);
        for(auto& i : nums2) map[i].insert(2);
        for(auto& i : nums3) map[i].insert(3);
        vector<int> ans;
        for(auto& [x, y] : map){
            if(y.size() >= 2) ans.push_back(x);
        }
        return ans;
    }
};