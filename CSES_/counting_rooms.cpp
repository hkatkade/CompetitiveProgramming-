#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int n, m;
char a[M][M];
int vis[M][M]={0};
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
void dfs(int x,int y){
    vis[x][y] = 1;
    for (int i = 0; i < 4;i++){
        int r = x + dx[i];
        int c = y + dy[i];
        if(r>=0 && r<n && c>=0 && c<m && a[r][c]=='.' && vis[r][c]==0){
            dfs(r, c);
        } 
    }
}
int main()
{
    fastIO;
    cin >> n >> m;
    int cc = 0;
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
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
    cout << cc << endl;
    return 0;
}
