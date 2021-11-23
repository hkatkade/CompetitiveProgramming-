class Solution {
public:
    unordered_map<int,int> m;
    int helper(string s,int idx){
        if(idx>=s.size()){
            return 1;
        }
        if(s[idx]=='0'){
            return 0;
        }
        if(m.find(idx)!=m.end()){
            return m[idx];
        }
        int ways=helper(s,idx+1);
        if(idx+2<=s.size() && stoi(s.substr(idx,2))<=26){
            ways+=helper(s,idx+2);
        }
        return m[idx]=ways;
    }
    int numDecodings(string s) {
       return helper(s,0);
    }
};

