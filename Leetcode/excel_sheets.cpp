class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int res = 0;
        int n = columnTitle.size();
        for(int i = 0; i < n; i++)
            res = res * 26 + (columnTitle[i] - 'A' + 1);
    
        return res;
        
    }
};

class Solution {
public:
    int titleToNumber(string s) {
        int n=s.length();
        vector<int> h(30,0);
        for(int i=1;i<=26;i++){
            h[i]=i;
        }
        int ans=0;
        for(int i=n-1;i>=0;i--){
            ans+=pow(26,n-1-i)*h[s[i]-'A'+1];
        }
        return ans;
        
    }
};