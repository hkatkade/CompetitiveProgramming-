class Solution {
public:
    int mySqrt(int x) {
        long long int start=0;
        long long int end=x;
        while(start+1<end){
            long long int mid = start + (end-start)/2;
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                start=mid;
            }
            else{
                end=mid;
            }
        }
        if(end*end==x){
            return end;
        }
        return start;
        
    }
};