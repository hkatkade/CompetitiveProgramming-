class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.size();
        vector<int> count(27,0);
        for(auto &i:s){
            count[i-'a']++;
        }
        unordered_set<int> st(count.begin(),count.end());
        return st.size()==2;
        
    }
};