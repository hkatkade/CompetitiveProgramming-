class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int ans=INT_MIN,len=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                len++;
            }
            else{
                len=1;
            }
            ans=max(ans,len);
        }
        return ans==INT_MIN?1:ans;
    }
};