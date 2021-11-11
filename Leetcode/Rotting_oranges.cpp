class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        int n=g.size(),m=g[0].size(),c=0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==2){
                    q.push({i,j});
                }
                else if(g[i][j]==1){
                    c++;
                }
            }
        }
        if(c==0){
            return 0;
        }
        int dx[]={-1,0,1,0};
        int dy[]={0,-1,0,1};
        int ans=0;
        while(!q.empty()){
            int len=q.size();
            ans++;
            while(len--){
                pair<int,int> p=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int r=p.first+dx[i];
                    int c=p.second+dy[i];
                    if(r>=0 && r<n && c>=0 && c<m && g[r][c]==1){
                        g[r][c]=2;
                        q.push({r,c});
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==1){
                    return -1;
                }
            }
        }
        return ans-1;
    }
};