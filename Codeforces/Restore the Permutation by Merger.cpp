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
        ll n,a;
        cin >> n;
        set<ll> s;
        //vector<ll> a(2 * n, 0);
        for (ll i = 0; i < 2 * n; i++){
            cin >> a;
            if(s.find(a)==s.end()){
                s.insert(a);
                cout << a << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}