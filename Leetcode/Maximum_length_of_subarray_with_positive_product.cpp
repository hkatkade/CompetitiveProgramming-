class Solution {
public:
    int getMaxLen(vector<int>& a) {
        int n=a.size();
        int ans=INT_MIN;
        for(int i=0;i<n;){
            int s=i;
            while(s<n && a[s]==0){
                s++;
            }
            int sn=-1,en=-1,neg=0,e=s;
            while(e<n && a[e]!=0){
                if(a[e]<0){
                    neg++;
                    if(sn==-1){
                        sn=e;
                    }
                    en=e;
                }
                e++;
            }
            if(neg%2==0){
                ans=max(ans,e-s);
            }
            else{
                if(sn!=-1){
                    ans=max(ans,e-sn-1);
                }
                if(en!=-1){
                    ans=max(ans,en-s);
                }
            }
            i=e+1;
        }
        return ans;
    }
};