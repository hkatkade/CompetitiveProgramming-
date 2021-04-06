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
        string s;
        bool ok = false;
        cin >> n >> s;
        for (ll i = 0; i < n - 1;i++){
            if(s[i]==s[n-1]){
                ok = true;
                break;
            }
        }
        if(ok){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}