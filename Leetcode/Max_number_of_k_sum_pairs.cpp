class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int target=k-nums[i];
            if(m[target]>0){
                ans++;
                m[target]--;
            }
            else{
                m[nums[i]]++;
            }    
        }
        return ans;
    }
};