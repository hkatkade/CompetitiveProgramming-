class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        if(maxi-k < mini+k){
            return 0;
        }
        return ((maxi-k)-(mini+k));
    }
};