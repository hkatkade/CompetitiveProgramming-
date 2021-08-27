#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, cap;
    cin >> n >> cap;
    vector<int> p(n, 0), w(n, 0);
    for (int i = 0; i < n;i++){
        cin >> p[i];
    }
    for (int i = 0; i < n;i++){
        cin >> w[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= c;j++){
            if(w[i-1]<=c){
                dp[i][j] = max(dp[i - 1] + dp[j][c - w[i - 1]], dp[i - 1][j]);
            }
            else{
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][w] << endl;
    return 0;
}