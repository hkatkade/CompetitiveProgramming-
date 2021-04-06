#include<bits/stdc++.h>
using namespace std;
int n,m;
int vis[1001][1001];
char a[1001][1001];
bool isValid(int x, int y){
    if(x<0 || y<0 || x>n-1 || y>m-1)
        return false;
    if(a[x][y]=='#' || vis[x][y]==1)
        return false;

    return true;
}
void dfs(int x, int y)
{
    vis[x][y] = 1;
    if(isValid(x+1,y))
        dfs(x + 1, y);
    if(isValid(x-1,y))
        dfs(x - 1, y);
    if(isValid(x,y+1))
        dfs(x, y + 1);
    if(isValid(x,y-1))
        dfs(x, y - 1);
}
int main()
{
    int cc = 0;
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(vis[i][j]==0 && a[i][j]=='.'){
                dfs(i, j);
                cc++;
            }
        }
    }
    cout << cc << "\n";
    return 0;
}