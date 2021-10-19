class Solution {
public:
    int helper(int n,vector<int>& a,int l,int r,int chance){
        if(l>r){
            return 0;
        }
        if(chance==1){
            return max(a[l]+helper(n,a,l+1,r,2),a[r]+helper(n,a,l,r-1,2));
        }
        else{
            return min(helper(n,a,l+1,r,1),helper(n,a,l,r-1,1));    
        }
        
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int two=0;
        for(auto &i:nums){
            two+=i;
        }
        int one=helper(n,nums,0,n-1,1);
        two-=one;
        return one>=two;
    }
};

//DP

class Solution {
public:
    int dp[22][22][3];
    int helper(int n,vector<int>& a,int l,int r,int chance){
        if(l>r){
            return 0;
        }
        if(dp[l][r][chance]!=-1){
            return dp[l][r][chance];
        }
        if(chance==1){
            return dp[l][r][chance]=max(a[l]+helper(n,a,l+1,r,2),a[r]+helper(n,a,l,r-1,2));
        }
        else{
            return dp[l][r][chance]=min(helper(n,a,l+1,r,1),helper(n,a,l,r-1,1));    
        }
        
    }
    bool PredictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int two=0;
        memset(dp,-1,sizeof(dp));
        for(auto &i:nums){
            two+=i;
        }
        int one=helper(n,nums,0,n-1,1);
        two-=one;
        return one>=two;
    }
};