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
        ll n;
        cin >> n;
        for (ll i = 1; i <= n;i++){
            cout << (4 * n - 2 * i) << " ";
        }
        cout << "\n";
    }
    return 0;
}