class Solution {
public:
    int findComplement(int num) {
        int mask=1,ans=0;
        for(int i=1;i<=(log10(num)/log10(2));i++){
            if((num&mask)==0){
                ans+=mask;
            }
            mask<<=1;
        }
        return ans;
    }
};