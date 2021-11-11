class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        int n=p.size();
        if(n==0){
            return 0;
        }
        priority_queue<int> pq(p.begin(),p.end());
        while(k--){
            int top=pq.top();
            pq.pop();
            if(top%2)
                pq.push((top/2)+1);
            else
                pq.push(top/2);
        }
        int ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};
