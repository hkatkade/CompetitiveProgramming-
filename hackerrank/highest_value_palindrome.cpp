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
    ll n, k;
    string s;
    cin >> n >> k >> s;
    for (ll i = 0; i < n;i++){
        if(s[i]!=s[n-i-1] && s[i]!='9' && k>=2){
            s[i] = '9';
            s[n - 1 - i] = '9';
        }
        else if(s[i]!=s[n-i-1] && k==1){
            if((s[i]-'0')>(s[n-1-i]-'0')){
                s[n - 1 - i] = s[i];
            }
            else{
                s[i] = s[n - i - 1];
            }
        }
    }
    cout << s;
    return 0;
}