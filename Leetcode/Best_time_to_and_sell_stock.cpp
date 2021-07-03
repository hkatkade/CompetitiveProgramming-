class Solution {
public:
    int maxProfit(vector<int>& p) {
        if(p.size()==1){
            return 0;
        }
        int diff=0,profit=0,mincost=p[0];
        for(int i=0;i<p.size();i++){
            mincost=min(mincost,p[i]);
            diff=p[i]-mincost;
            profit=max(profit,diff);
        }
        return profit;
    }
};