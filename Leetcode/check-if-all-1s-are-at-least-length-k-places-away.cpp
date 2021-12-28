class Solution {
public:
    bool kLengthApart(vector<int>& a, int k) {
        vector<int> c;
        for(int i=0;i<a.size();i++){
            if(a[i]==1){
                c.push_back(i);
            }
        }
        if(c.size()==1 || c.size()==0){
            return true;
        }       
        if(c.size()==2){
            if(abs(c[0]-c[1])<=k){
                return false;
            }
        }
        for(int i=1;i<c.size()-1;i++){
            if(abs(c[i]-c[i-1])<=k || abs(c[i]-c[i+1])<=k){
                return false;
            }
        }
        return true;
    }
};