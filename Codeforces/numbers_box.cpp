#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main()
{
    fastIO;
    w(t){
        ll n, m, neg=0,sum=0,mini=1000000;
        cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m, 0));
        for (ll i = 0; i < n;i++){
            for (ll j = 0; j < m;j++){
                cin >> a[i][j];
                mini = min(mini, abs(a[i][j]));
                sum += abs(a[i][j]);
                if(a[i][j]<0){
                    neg++;
                }
            }
        }
        if(neg%2){
            cout << sum - 2 * mini << "\n";
        }
        else{
            cout << sum << "\n";
        }
        
        
    }
    return 0;
}