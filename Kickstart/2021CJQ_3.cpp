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
    ll q=1;
    w(t){
        int n, c;
        cin >> n >> c;
        if(c<(n-1) || c>(((n+(n*n))/2))-1){
            cout << "Case #" << q << ": " << "IMPOSSIBLE" << "\n";
            q++;
            continue;
        }
        

        cout << "Case #" << q << ": " << ans << "\n";
        q++;
    }
    return 0;
}
