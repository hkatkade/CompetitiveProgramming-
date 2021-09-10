#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
bool a[151];
void seive(){
    set<ll> s;
    memset(a, true, sizeof(a));
    a[0] = false;
    a[1] = false;
    for (ll i = 2; i * i <= 105;i++){
        if(a[i]==true){
            for (ll j = i * i; j <= 150;j+=i){
                a[j] = false;
            }
        }
    }
}
void solve(string s,int n){
    for (ll i = 0; i < n;i++){
        if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9'){
            cout << 1 << endl;
            cout << s[i] << endl;
            return;
        }
    }
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            if(a[(s[i]-'0')*10+(s[j]-'0')]==false){
                cout << 2 << endl;
                cout << s[i] << s[j] << endl;
                return;
            }
        }
    }
}
int main()
{
    fastIO;
    seive();
    w(t){
        string s;
        int n;
        cin >> n >> s;
        solve(s,n);
    }
    return 0;
}