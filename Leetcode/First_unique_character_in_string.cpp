class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>> m;
        for(int i=0;i<s.size();i++){
            m[s[i]].first++;
            m[s[i]].second=i;
        }
        int ans=INT_MAX;
        for(auto [key,pr]:m){
            if(pr.first==1){
                ans=min(ans,pr.second);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};