#include<bits/stdc++.h>
using namespace std;
int a[100][100],vis[100][100];
int n, m, cc=0;
bool isValid(int x,int y)
{
    if(x<1 || x>n || y>m || y<1){
    //cout<<x<<" "<<y<<"\n";
     //cout<<"false"<<"\n";
        return false;
    }
    if(vis[x][y]==1 || a[x][y]==0){
       // cout<<"flase"<<"\n";
        return false;
    }

    return true;
}
int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
//int dx[] = {-1, 0, 1, 0,-1,1,1,-1};
//int dy[] = {0, 1, 0, -1,1,1,-1,-1};
void dfs(int x,int y)
{
    cc++;
    //cout<<cc<<"\n";
    vis[x][y] = 1;
    for (int i = 0; i < 8;i++){
      //  cout<<"sdf"<<"\n";
        if(isValid(x+dx[i],y+dy[i])){
               dfs(x + dx[i], y + dy[i]);
      //         cout<<x + dx[i]<<" "<<y + dy[i]<<"\n";
        }
    }
}
int main()
{
    cin>>n>>m;
    for (int i = 1; i <= n;i++){
        for (int j = 1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    int ans=-1;
    for (int i = 1; i <=n;i++){
        for (int j = 1; j <= m;j++){
            if(vis[i][j]==0 && a[i][j]==1){
                cc=0;
      //          cout<<i<<" "<<j<<"\n";
                dfs(i, j);
                ans=max(ans,cc);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
