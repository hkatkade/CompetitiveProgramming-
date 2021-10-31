class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        int n=a.size();
        int low=0,high=n-1;
        vector<int> ans(2,-1);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(a[mid]==target){
                ans[0]=mid;
                high=mid-1;
            }
            else if(a[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(a[mid]==target){
                ans[1]=mid;
                low=mid+1;
            }
            else if(a[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};