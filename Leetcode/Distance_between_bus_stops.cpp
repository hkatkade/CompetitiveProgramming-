class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start>destination){
            swap(start,destination);
        }
        int sum=accumulate(distance.begin(),distance.end(),0);
        int one=0;
        for(int i=start;i<destination;i++){
            one+=distance[i];
        }
        int ans=min(one,sum-one);
        return ans;
    }
};