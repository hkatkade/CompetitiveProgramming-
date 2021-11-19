class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int n=a.size(),sum=0;
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        int ans=sum;
        for(int i=0;i<k;i++){
            sum-=a[k-i-1];
            sum+=a[n-i-1];
            ans=max(ans,sum);
        }
        return ans;
    }
};