class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) 
    {
        priority_queue<pair<int,int>> pq;
        int m=worker.size(),n=difficulty.size(),ans=0;
        for(int i=0;i<n;i++){
            pq.push({profit[i],difficulty[i]});
        }
        sort(worker.begin(),worker.end());
        for(int i=m-1;i>=0;i--){
            while(!pq.empty() && pq.top().second>worker[i]){
                pq.pop();
            }
            if(!pq.empty()){
                ans+=pq.top().first;
            }
        }
        return ans;
    }
};