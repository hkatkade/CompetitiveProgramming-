class Solution {
public:
    int helper(string s,int i,int j){
        int n=s.size(),count=0;
        while(i>=0 && j<n && s[i]==s[j]){
            i--,j++;
            count++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int ans=0,n=s.size();
        for(int i=0;i<n;i++){
            ans+=helper(s,i,i);
            ans+=helper(s,i,i+1);
        }
        return ans;
    }
};