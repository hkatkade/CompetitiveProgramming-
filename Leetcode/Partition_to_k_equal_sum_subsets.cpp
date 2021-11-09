class Solution {
public:
    bool helper(vector<int>& a,vector<int>& vis,int idx,int k,int sum,int target){
        if(k==1){
            return true;
        }
        if(idx==a.size() || sum>target){
            return false;
        }
        if(sum==target){
            return helper(a,vis,0,k-1,0,target);
        }
        for(int i=idx;i<a.size();i++){
            if(vis[i]==0){
                vis[i]=1;
                if(helper(a,vis,i+1,k,sum+a[i],target)){
                    return true;
                }
                vis[i]=0;
            }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& a, int k) {
        int total=accumulate(a.begin(),a.end(),0);
        cout<<total<<endl;
        cout<<total/k<<endl;
        int n=a.size();
        if(total%k!=0){
            return false;
        }
        vector<int> vis(n,0);
        return helper(a,vis,0,k,0,(int)(total/k));
    }
};