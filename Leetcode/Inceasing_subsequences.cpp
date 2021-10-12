#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    void helper(int n,vector<int> nums,int idx,set<vector<int>>& s,vector<int> v){
        if(v.size()>1){
            s.insert(v);
        }
        if(idx>n-1){
            return;
        }
        for(int i=idx;i<n;i++)
            if(v.empty() || v[v.size()-1]<=nums[i]){
                v.push_back(nums[i]);
                helper(n,nums,i+1,s,v);
                if(!v.empty()){
                    v.pop_back();
                }
            }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> s;
        helper(n,nums,0,s,{});
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};