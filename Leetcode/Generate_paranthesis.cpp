class Solution {
public:
    vector<string> ans;
    void helper(string s,int check,int len){
        if(check<0 || s.length()>2*len){
            return;
        }
        if(check==0 && s.length()==2*len){
            ans.push_back(s);
        }
        helper(s+'(',check+1,len);
        helper(s+')',check-1,len);
    }
    vector<string> generateParenthesis(int n) {
        helper("",0,n);
        return ans;
    }
};