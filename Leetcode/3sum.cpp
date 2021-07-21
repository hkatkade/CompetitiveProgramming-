class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<vector<int>>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[j]+nums[k];
                if(sum==(-nums[i])){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(sum>-nums[i]){
                    k--;
                }
                else if(sum<-nums[i]){
                    j++;
                }
                   
            }
        }
        return ans;
    }
};