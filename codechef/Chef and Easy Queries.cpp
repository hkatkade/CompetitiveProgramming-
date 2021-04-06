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
        ll n, k, days = 0;
        bool flag = true;
        cin >> n >> k;
        ll a;
        for (ll i = 0; i < n;i++){
            cin >> a;
            days = days + a - k;
            if(days<0){
                cout << i + 1 << "\n";
                flag = false;
                break;
            }
        }
        if (flag)
            cout << n + ceil(days/k) << "\n";
    }
    return 0;
}