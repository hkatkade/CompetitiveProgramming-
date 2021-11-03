class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int low=0,high=sqrt(c);
        while(low<=high){
            long long int ans=low*low+high*high;
            if(ans==c){
                return true;
            }
            else if(ans<c){
                low++;
            }
            else{
                high--;
            }
        }
        return false;
    }
};