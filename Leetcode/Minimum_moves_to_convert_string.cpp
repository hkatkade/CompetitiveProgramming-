class Solution {
public:
    int minimumMoves(string s) {
        int n=s.length(),ans=0;
        for(int i=0;i<n;){
            if(s[i]=='X'){
                i+=3;
                ans++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};