class Solution {
public:
    vector<string> helper(string &s,int idx,unordered_map<int,string> &m){
        if(idx==s.size()){
            return {""};
        }
        vector<string> temp=helper(s,idx+1,m);
        vector<string> ans;
        for(auto &a:m[s[idx]-'0']){
            for(auto k:temp){
                ans.push_back(a+k);
            }
        }
        return ans;
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string> m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        if(digits.size()==0){
            return {};
        }
        return helper(digits,0,m);
    }
};