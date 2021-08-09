#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main(){
    w(t){
        ll n;
        cin >> n;
        vector<vector<int>> a(2, vector<int>(n, 0));
        ll pre = 0;
        for (int i = 0; i < 2;i++){
            for (int j = 0; j < n;j++){
                cin >> a[i][j];
                if(i==0)
                    pre += a[i][j];
            }
        }
        ll ans = INT_MAX, suff = 0;
        for (int i = 0; i < n;i++){
            pre -= a[0][i];
            ans = min(ans, max(pre, suff));
            suff += a[1][i];
        }
        cout << ans << endl;
    }
    return 0;
}
