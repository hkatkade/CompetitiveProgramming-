class Solution {
public:
    struct comparefn{
        bool operator()(const string& a,const string &b){
            if(a.size()==b.size()){
                for(int i=0;i<a.size();i++){
                    int x=a[i]-'0',y=b[i]-'0';
                    if(x==y){
                        continue;
                    }
                    else{
                        return x<y;
                    }
                }
            }
            return a.size()<=b.size();
        };
    };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,comparefn> pq;
        for(auto &i:nums){
            pq.push(i);
        }
        string ans="";
        while(!pq.empty() && k--){
            ans=pq.top();
            pq.pop();
            
        }
        return ans;
    }
};