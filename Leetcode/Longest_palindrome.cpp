class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        int c=0,max_odd_len=0;
        for(auto &i:s){
            m[i]++;
        }
        int ans=0;
        for(auto &i:m){
            if(i.second%2==0){
                ans+=i.second;
            }
            else{
                ans+=i.second-1;
                c++;
            }
        }
        if(c>0)
            ans+=max_odd_len+1;
        return ans;
    }
};