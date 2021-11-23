class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> g[n+1];
        for(auto &i:times){
            g[i[0]].push_back(make_pair(i[1],i[2]));
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dist(n+1,1e6);
        dist[k]=0;
        dist[0]=0;
//         {distance,node}
        pq.push({0,k});
        while(!pq.empty()){
            int curr_d=pq.top().first;
            int curr=pq.top().second;
            pq.pop();
            
            for(pair<int,int> edge:g[curr]){
                cout<<edge.second<<endl;
                if(curr_d + edge.second < dist[edge.first]){
                    dist[edge.first] = curr_d + edge.second;
                    pq.push({dist[edge.first], edge.first});
                }
            }
        }
        int ans=0;
        for(auto &i:dist){
            if(i==1e6)
                return -1;
            ans=max(ans,i);
        }
        return ans;
    }
};