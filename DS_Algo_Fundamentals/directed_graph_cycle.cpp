#include<bits/stdc++.h>
using namespace std;
#define MAX 100
int n, m;
vector<int> vis(MAX, -1);
vector<int> g[MAX];
vector<int> par[MAX];
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
bool dfs(int x){
    stack<int> s;
    s.push(x);
    vis[x] = -1;
    for(int i=x;i<n;i++){
        while(!s.empty()){
            int top=s.top();

        }
    }
}
int main(){
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m;i++){
        cin >> a >> b;
        g[a].push_back(b);
    }
    cout<<dfs(1)?"YES":"NO";
    return 0;
}
