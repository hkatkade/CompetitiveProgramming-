class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=0,j=0,sum=0,i=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        ans=sum/k;
        i=0,j=k-1;
        while(i<(nums.size()-k)){
            sum-=nums[i];
            i++;
            j++;
            sum+=nums[j];
            ans=max(ans,sum/k);
        }
        return ans;
        
        
    }
};