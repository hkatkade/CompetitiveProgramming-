class Solution {
public:
    int guessNumber(int n) {
        int guesss=-10,low=1,high=n;
        while(guesss!=n){
            int mid = low + ((high - low) / 2);
            guesss=guess(mid);
            if(guesss==0){
                return mid;
            }
            else if(guesss==-1){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};