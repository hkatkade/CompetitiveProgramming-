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
        string s;
        ll ans = 0;
        cin >> s;
        stack<char> st;
        for (ll i = 0; i < s.length();i++){
            if(s[i]=='(' || s[i]=='['){
                st.push(s[i]);
            }
            else if(!st.empty()){
                char t = st.top();
                if(s[i]==')' && t=='('){
                    ans++;
                }
                else if(s[i]==']' && t=='['){
                    ans++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}