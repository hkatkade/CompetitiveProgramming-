#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main(){
   w(t){
        ll a, b, c;
        cin >> a >> b >> c;
        int n = 2 * (abs(a - b));
        if(a>n || b>n || c>n || abs(a-b)<=1){
            cout << -1 << endl;
        }
        else{
            ll x = abs(a - b) + c;
            if(x>n){
                cout << (x - n) << endl;
            }
            else{
                cout << x << endl;
            }
        }
    }
    return 0;
}
