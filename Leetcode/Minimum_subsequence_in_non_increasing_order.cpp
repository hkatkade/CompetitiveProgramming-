#include<bits/stdc++.h>
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        sort(nums.rbegin(),nums.rend());
        vector<int> ans;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
            sum+=nums[i];
            total-=nums[i];
            if(sum>total){
                // ans.push_back(nums[i]);
                return ans;
            }
        }
        return {};
    }
};