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
        ll l, r;
        cin >> l >> r;
        if(r>=2*l){
            cout << -1 << "\n";
        }
        else{
            cout << r << "\n";
        }
    }
    return 0;
}