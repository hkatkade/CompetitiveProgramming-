class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long long int v_max=INT_MIN,v_curr=0;
        long long int h_max=INT_MIN,h_curr=0;
        for(auto &i:verticalCuts){
            v_max=max(v_max,i-v_curr);
            v_curr=i;
        }
        v_max=max(v_max,w-v_curr);
        for(auto &i:horizontalCuts){
            h_max=max(h_max,i-h_curr);
            h_curr=i;
        }
        h_max=max(h_max,h-h_curr);
        return (h_max*v_max)%1000000007;
    }
};