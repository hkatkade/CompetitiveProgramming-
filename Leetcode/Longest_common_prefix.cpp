class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int mini=INT_MAX;
        string first=s[0];
        for(auto &i:s){
            int len=0,k=0,j=0;
            while(j<first.size() && k<i.size()){
                if(i[k]==first[j]){
                    len++;
                }
                else{
                    break;
                }
                k++;
                j++;
            }
            mini=min(mini,len);
        }
        return first.substr(0,mini);
    }
};