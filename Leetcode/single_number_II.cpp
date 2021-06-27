class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unsigned int mask=1,ans=0;
        for(int j=0;j<32;j++){
            int count=0;
            for(auto &i:nums){
                // int bit=;
                if(i&mask){
                    count++;
                }
            }
            if(count%3){
                ans+=mask;
            }
            mask=mask<<=1;
        }
        return ans;        
    }
};