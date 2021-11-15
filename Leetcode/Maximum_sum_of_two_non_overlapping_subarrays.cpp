class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& a, int x, int y) {
        int n=a.size();
        vector<int> dp1(n,0),dp2(n,0);
        int sum=0;
        for(int i=0;i<n;i++){
            if(i<x){
                sum+=a[i];
                dp1[i]=sum;
            }
            else{   
                sum+=a[i]-a[i-x];
                dp1[i]=max(sum,dp1[i-1]);
            }
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            if(i+y>=n){
                sum+=a[i];
                dp2[i]=sum;
            }
            else{
                sum+=a[i]-a[i+y];
                dp2[i]=max(sum,dp2[i+1]);
            }
        }
        int ans=INT_MIN;
        for(int i=x-1;i<(n-y);i++){
            ans=max(ans,dp1[i]+dp2[i+1]);
        }
        vector<int> dp3(n,0),dp4(n,0);
        sum=0;
        for(int i=0;i<n;i++){
            if(i<y){
                sum+=a[i];
                dp3[i]=sum;
            }
            else{
                sum+=a[i]-a[i-y];
                dp3[i]=max(sum,dp3[i-1]);
            }
        }
        sum=0;
        for(int i=n-1;i>=0;i--){
            if(i>=(n-x)){
                sum+=a[i];
                dp4[i]=sum;
            }
            else{
                sum+=a[i]-a[i+x];
                dp4[i]=max(sum,dp4[i+1]);
            }
        }
        for(int i=y-1;i<(n-x);i++){
            ans=max(ans,dp3[i]+dp4[i+1]);
        }
        return ans;
    }   
};