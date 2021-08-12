#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main()
{
    fastIO;
    w(t){
        ll x, y;
        cin >> x >> y;
        if(x+y>=6){
            cout << 0 << "\n";
        }
        else{
            cout << setprecision(6) << (6 - (x + y)) / 6 << "\n";
        }
    }
    return 0;
}
