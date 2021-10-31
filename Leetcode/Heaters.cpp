class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int n=houses.size();
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            auto lb=lower_bound(heaters.begin(),heaters.end(),houses[i]);
            if(lb==heaters.begin()){
                ans=max(ans,*lb-houses[i]);
            }
            else if(lb==heaters.end()){
                ans=max(ans,houses[i]-*(lb-1));
            }
            else{
                ans=max(ans,min(*lb-houses[i],houses[i]-*(lb-1)));
            }
        }
        return ans;
    }
};