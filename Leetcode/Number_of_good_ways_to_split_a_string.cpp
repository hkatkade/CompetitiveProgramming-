class Solution {
public:
    int numSplits(string s) {
        unordered_set<char> st;
        unordered_map<char,int> m;
        int ans=0;
        for(auto &i:s){
            m[i]++;
        }
        for(auto &i:s){
            st.insert(i);
            if(m[i]==1){
                m.erase(i);
            }
            else{
                m[i]--;
            }
            if(st.size()==m.size()){
                ans++;
            }
        }
        return ans;
    }
};