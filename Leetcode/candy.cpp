class Solution {
public:
    int candy(vector<int>& r) {
        int n=r.size();
        int ans=0;
        vector<int> can(n,1);
        for(int i=1;i<n;i++){
            if(r[i-1]<r[i] && can[i]<=can[i-1]){
                can[i]=can[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(r[i]>r[i+1] && can[i]<=can[i+1]){
                can[i]=can[i+1]+1;
            }
        }
        cout<<endl;
        return accumulate(can.begin(),can.end(),0);
    }
};