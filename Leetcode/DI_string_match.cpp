class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        int l=0,h=n;
        vector<int> ans;
        for(auto &i:s){
            if(i=='I'){
                ans.push_back(l);
                l++;
            }
            else{
                ans.push_back(h);
                h--;
            }
        }
        if(l!=0)
            ans.push_back(l);
        else
            ans.push_back(h);
        return ans;
    }
};