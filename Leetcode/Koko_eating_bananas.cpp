class Solution {
public:
    bool ok(vector<int>& piles,int h,int k){
        int sum=0;
        for(int i=0;i<piles.size();i++){
            int temp=ceil(double(piles[i])/double(k));
            sum+=temp;
        }
        return sum<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=int(1e9+1);
        while(l<r){
            int mid=(l+r)/2;
            if(ok(piles,h,mid)){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};