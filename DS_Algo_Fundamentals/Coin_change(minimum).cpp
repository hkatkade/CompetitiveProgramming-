#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int minCoins(int n, vector<int>& a){
    if(n==0){
        return 0;
    }
    int ans = INT_MAX;
    for (int i = 0; i < a.size();i++){
        if(n-a[i]>=0){
            int subAns = minCoins(n - a[i], a);
            if(subAns!=INT_MAX && subAns+1<ans){
                ans = subAns + 1;
            }
        }
    }
    return ans;
}
int minCoinsDP(int n,vector<int>& a,vector<vector<int>>& dp){
    if(n==0){
        return 0;
    }
    for (int i = 1; i <= n;i++){
        for (int j = 0; j < a.size();i++){
            dp[i][j]=min()
        }
    }

    // for (int i = 0; i < a.size();i++){
    //     for (int j = 1; j <= n;j++){
    //         if(j-a[i]>=0){

    //         }
    //     }
    // }
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> c(k, 0);
    vector<vector<int>> dp(n + 1, vector<int>(k, 0));
    for (int i = 0; i < k;i++){
        cin >> c[i];
    }
    int ans = minCoins(n, c);
    cout << ans << endl;
    return 0;
}
