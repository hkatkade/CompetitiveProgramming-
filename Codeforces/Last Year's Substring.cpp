#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
ll seive(ll n){
    set<ll> s;
    bool a[n + 1];
    memset(a, true, sizeof(a));
    a[0] = false;
    a[1] = false;
    for (ll i = 2; i * i <= n;i++){
        if(a[i]==true){
            for (ll j = i * i; j <= n;j+=i){
                a[j] = false;
            }
        }
    }
    for (ll i = 0; i <= n;i++){
        if(a[i]==true){
            s.insert(i);
        }
    }
    return s.size();
}
int main()
{
    fastIO;
    w(t){
        ll n;
        string s;
        cin >> n >> s;
        if(s.substr(n-4,4)=="2020"){
            cout << "YES\n";
        }
        else if(s.substr(0,2)=="20" && s.substr(n-2,2)=="20"){
            cout << "YES\n";
        }
        else if(s.substr(0,1)=="2" && s.substr(n-3,3)=="020"){
            cout << "YES\n";
        }
        else if(s.substr(0,3)=="202" && s.substr(n-1,1)=="0"){
            cout << "YES\n";
        }
        else if(s.substr(0,4)=="2020"){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}