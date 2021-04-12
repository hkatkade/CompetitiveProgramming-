#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int n, m;
vector<int> g[M];
vector<vector<int>> vis(1000, vector<int>(1000, 0));
vector<int> par(2 * M, -1);
vector<vector<char>> a(1000, vector<char>(1000, 0));
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
bool isvalid(int x,int y){
    if(x<0 || y<0 || y>m-1 || x>n-1){
        return false;
    }
    if(vis[x][y]==1 || a[x][y]=='#'){
        return false;
    }
    return true;
}
void dfs(int x,int y){
    vis[x][y] = 1;
    for (int i = 0; i < 4;i++){
        if(isvalid(x+dx[i],y+dy[i])){
            if(a[x+dx[i]][y+dy[i]]=='B'){
                return;
            }
        }
    }
}
void bfs(int x){
    vis[x] = 1;
    queue<int> q;
    q.push(x);
    while(!q.empty()){
        int next = q.front();
        q.pop();
        for(auto &i:g[x]){
            vis[i] = 1;
            par[i] = next;
            q.push(i);
        }
    }
}
int main()
{
    fastIO;
    int r, c;
    cin >> n >> m;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> a[i][j];
            if(a[i][j]=='A'){
                r = i;
                c = j;
            }
        }
    }
    dfs(r, c);

    return 0;
}
