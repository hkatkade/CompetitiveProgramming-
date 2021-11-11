class Solution {
public:
    int sgn(int a){
        if(a<0){
            return -1;
        }
        else if(a>0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int wiggleMaxLength(vector<int>& nums) {
        int ans=1,prev=0;
        for(int i=1;i<nums.size();i++){
            int curr=sgn(nums[i]-nums[i-1]);
            if(curr!=prev && curr!=0){
                ans++;
                prev=curr;
            }
        }
        return ans;
    }
};