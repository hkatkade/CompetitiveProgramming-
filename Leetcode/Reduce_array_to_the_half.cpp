class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<pair<int,int>> pq;
        unordered_map<int,int> m;
        for(auto &i:arr){
            m[i]++;
        }
        for(auto &i:m){
            pq.push({i.second,i.first});
        }
        int ans=0,size=arr.size()/2;
        while(!pq.empty()){
            int temp=pq.top().first;
            size-=temp;
            ans++;
            if(size<=0){
                break;
            }
            pq.pop();
        }
        return ans;
    }
};