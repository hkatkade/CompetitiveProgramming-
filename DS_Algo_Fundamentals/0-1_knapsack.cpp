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
    vector<vector<int>> dp(n + 1, vector<int>(cap + 1, 0));
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= cap;j++){
            if(w[i-1]<=j){
                dp[i][j] = max(p[i - 1] + dp[i - 1][j - w[i - 1]], dp[i - 1][j]);
            }
            else{
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    // for (int i = 0; i <= n;i++){
    //     for (int j = 0; j <= cap;j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[n][cap] << endl;
    return 0;
}