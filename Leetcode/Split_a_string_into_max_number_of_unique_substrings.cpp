class Solution {
public:
    int maxUniqueSplit(string s) {
        unordered_set<string> st;
        return helper(s,st);
    }
    int helper(string s,unordered_set<string> st){
        int maxi=0;
        for(int i=1;i<=s.size();i++){
            string temp=s.substr(0,i);
            if(st.find(temp)==st.end()){
                st.insert(temp);
                maxi=max(maxi,1+helper(s.substr(i),st));
                st.erase(temp);
            }
        }
        return maxi;
    }
};