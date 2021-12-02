class Solution {
public:
    int hammingDistance(int x, int y) {
        long long int n=x^y,mask=1,ans=0;
        if(n==0){
            return 0;
        }
        for(int i=0;i<(int)log2(n)+1;i++){
            if(n&mask){
                ans++;
            }
            mask<<=1;
        }
        return ans;
    }
};