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
        ll n, k;
        cin >> n >> k;
        vector<int> a(n, 0);
        for (ll i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a);
        ll h1 = 0, h2 = 0, ans=0;
        for (ll i = n-1; i >= 0;i--){
            if(h1>=k && h2>=k){
                break;
            }
            if(i%2==0){
                if(h1<k){
                    h1 += a[i];
                    ans++;
                }
                else if(h2<k){
                    h2 += a[i];
                    ans++;
                }
            }
            else if(i%2==1){
                if(h2<k){
                    h2 += a[i];
                    ans++;
                }
                else if(h1<k){
                    h1 += a[i];
                    ans++;
                }
            } 
        }
        if(h1>=k && h2>=k){
            cout << ans << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
    return 0;
}
