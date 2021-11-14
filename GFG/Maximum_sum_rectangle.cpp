class Solution {
  public:
    int kadane(vector<int> &row){
        int max_till_now=row[0],curr=0;
        for(int i=0;i<row.size();i++){
            curr+=row[i];
            max_till_now=max(max_till_now,curr);
            if(curr<0){
                curr=0;
            }
        }
        return max_till_now;
    }
    int maximumSumRectangle(int R, int C, vector<vector<int>> a) {
        int n=a.size(),m=a[0].size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            vector<int> row(m,0);
            for(int j=i;j<n;j++){
                for(int k=0;k<m;k++){
                    row[k]+=a[j][k];
                }
                ans=max(ans,kadane(row));
            }
        }
        return ans;
    }
};