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
        double ans = 0;
        string s;
        cin >> n >> s;
        for (ll i = 0; i < n-1;i++){
            if(s[i]==s[i+1])
                ans++;
        }
        cout << ceil(ans / 2.0) << "\n";
    }
    return 0;
}