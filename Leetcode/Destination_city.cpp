class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> in;
        unordered_map<string,int> out;
        for(auto &i:paths){
            in[i[0]];
            out[i[1]]++;
        }
        string ans="";
        for(auto &i:out){
            if(in.count(i.first)==0){
                ans=i.first;
                break;
            }
        }
        return ans;
    }
};