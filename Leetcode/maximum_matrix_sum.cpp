#define ll long long
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& a){
        ll n=a.size();
        ll m=a[0].size();
        int mini=1e6;
        long long int sum=0,c=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(a[i][j]<0){
                    c++;
                }
                mini=min(mini,abs(a[i][j]));
                sum+=abs(a[i][j]);
            }
        }
        if(c%2)
            sum-=2*mini;
        return sum;
    }
};