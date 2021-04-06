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
    ll n;
    string s;
    cin >> n >> s;
    unordered_map < char, ll> m;
    m['G'] = 0;
    m['C'] = 0;
    m['T'] = 0;
    m['A'] = 0;
    for (ll i = 0; i < n;i++){
        if(s[i]=='G'){
            m['G']++;
        }
        else if(s[i]=='A'){
            m['A']++;
        }
        else if(s[i]=='T'){
            m['T']++;
        }
        else{
            m['C']++;
        }
    }
    ll ans=0,min_count = n / 4;
    for(auto &i:m){
        if(i.second<min_count){
            ans += min_count - i.second;
        }
    }
    cout << ans;
    return 0;
}