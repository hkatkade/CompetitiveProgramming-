#include<bits/stdc++.h>
using namespace std;
int a[100][100],vis[100][100];
int n, m;
bool isValid(int x,int y)
{
    if(x<1 || x>n || y>m || y<1)
        return false;
    if(vis[x][y]==1 || a[x][y]==0)
        return false;

    return true;
}
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
void dfs(int x,int y)
{
    vis[x][y] = 1;
    for (int i = 0; i < 4;i++){
        if(isValid(x+dx[i],y+dy[i]))
            dfs(x + dx[i], y + dy[i]);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 1; i <= n;i++){
        for (int j = 1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    int cc=0;
    for (int i = 1; i <=n;i++){
        for (int j = 1; j <= m;j++){
            if(!vis[i][j] && a[i][j]==1){
                dfs(i, j);
                cc++;
            }
        }
    }
    cout<<cc<<endl;
    return 0;
}
