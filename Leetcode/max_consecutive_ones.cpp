class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int n=a.size(),len=0,ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                len++;
            }
            else{
                len=0;
            }
            ans=max(ans,len);
        }
        return ans;
    }
};