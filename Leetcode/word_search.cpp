class Solution {
public:
    bool dfs(vector<vector<int>>& vis,vector<vector<char>>& b, string &w,int n,int m,int l,int i,int j,int ind){
        if(ind==l){
            return true;
        }
        if(i<0 || i>=n || j<0 || j>=m || vis[i][j]==1 || w[ind]!=b[i][j])
            return false;
        vis[i][j]=1;
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        for(int k=0;k<4;k++){
            int r=i+dx[k];
            int c=j+dy[k];
            if(dfs(vis,b,w,n,m,l,r,c,ind+1))
               return true;
        }
        vis[i][j]=0;
        return false;
    }
    bool exist(vector<vector<char>>& b, string w) {
        int n=b.size(),m=b[0].size();
        int l=w.length(),ind=0;
        bool ok=false;
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(b[i][j]==w[0]){
                    if(dfs(vis,b,w,n,m,l,i,j,ind))
                        return true;
                }
            }
        }
        return false;
    }
};


// class Solution {
// public:
//     bool dfs(bool &ok,vector<vector<int>>& vis,vector<vector<char>>& b, string &w,int n,int m,int l,int i,int j,int ind){
//         if(ind==l){
//             // ok=true;
//             return true;
//         }
//         if(ind>l){
//             return false;
//         }
//         if(i<0 || i>=n || j<0 || j>=m || vis[i][j]==1 || w[ind]!=b[i][j])
//             return false;
//         // if(vis[i][j]==1 || w[ind]!=b[i][j])
//         //      return false;
//         // if(w[ind]!=b[i][j])
//         //     return false;
//         vis[i][j]=1;
//         int dx[] = {-1, 0, 1, 0};
//         int dy[] = {0, 1, 0, -1};
//         for(int k=0;k<4;k++){
//             int r=i+dx[k];
//             int c=j+dy[k];
//             // if(dfs(ok,vis,b,w,n,m,l,r,c,ind+1))
//             //             return true;
//             // if(r>=0 && r<n && c>=0 && c<m && vis[r][c]==0)
//             {
//                 // if(b[r][c]==w[ind])
//                 {
//                     cout<<"letter is: "<<w[ind]<<" "<<r<<" "<<c<<" "<<ind<<endl;
//                     if(dfs(ok,vis,b,w,n,m,l,r,c,ind+1))
//                         return true;
//                 }
                
//             }
            
//         }
//         vis[i][j]=0;
//         return false;
//     }
//     bool exist(vector<vector<char>>& b, string w) {
//         int n=b.size(),m=b[0].size();
//         int l=w.length(),ind=0;
//         bool ok=false;
//         vector<vector<int>> vis(n,vector<int>(m,0));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(b[i][j]==w[0])
//                 {
//                     // ind=0;
//                     if(dfs(ok,vis,b,w,n,m,l,i,j,ind))
//                         return true;
//                 }
//                 // if(ok){
//                 //     return true;
//                 // }
//             }
//         }
//         return false;
//     }
// };