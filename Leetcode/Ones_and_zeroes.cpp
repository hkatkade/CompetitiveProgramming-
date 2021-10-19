class Solution {
public:
    vector<int> count(string s){
        vector<int> a(2,0);
        for(auto &i:s){
            a[i-'0']++;
        }
        return a;
    } 
    int helper(int idx,vector<string>& s,int m,int n){
        if(idx==s.size() || m+n==0){
            return 0;
        }
        vector<int> a=count(s[idx]);
        int consider=0,skip=0;
        if(m>=a[0] && n>=a[1]){
            consider=1+helper(idx+1,s,m-a[0],n-a[1]);
        }
        skip=helper(idx+1,s,m,n);
        return max(skip,consider);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        return helper(0,strs,m,n);
    }
};