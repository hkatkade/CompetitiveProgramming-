class Solution {
public:
    vector<int> findOriginalArray(vector<int>& a) {
        int n=a.size();
        vector<int> ans;
        if(n%2){
            return ans;
        }
        sort(a.begin(),a.end());
        unordered_map<int,int> m;
        for(auto &i:a){
            m[i]++;
        }
        for(auto &i:a){
            if(m[i]>0){
                ans.push_back(i);
                m[i]--;
                m[2*i]--;
                if(m[2*i]<0){
                    return {};
                }
            }
        }
        return ans;
    }
};