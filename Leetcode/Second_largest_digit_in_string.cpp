class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        unordered_map<int,int> m;
        for(auto &i:s){
            if(isdigit(i)){
                m[i-'0']++;
            }
        }
        int fmax=INT_MIN,smax=INT_MIN;
        for(auto [key,val]:m){
            if(key>fmax){
                smax=fmax;
                fmax=key;
            }
            else if(key>smax && key!=fmax){
                smax=key;
            }
            
        }
        return smax==INT_MIN?-1:smax;
    }
};