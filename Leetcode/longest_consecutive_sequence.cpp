class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(auto &i:nums){
            s.insert(i);
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(!s.count(nums[i]-1)){
                int curr=nums[i];
                int streak=1;
                while(s.count(nums[i]+1)){
                    nums[i]++;
                    streak++;
                }
                ans=max(ans,streak);
            }
        }
        return ans;
    }
};