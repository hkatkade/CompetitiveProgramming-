class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m;
        unordered_map<char,bool> vis;
        for(int i=0;i<t.length();i++){
            if(m.count(s[i]) && m[s[i]]!=t[i]){
                return false;
            }
            else if(!vis.count(t[i])){
                m[s[i]]=t[i];
                vis[t[i]]=true;
            }
            else if(!m.count(s[i]) && vis[t[i]]==true){
                return false;
            }
        }
        return true;
        
    }
};