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
        vector<int> a(n, 0),v;
        ll sum = 0;
        for(auto &i:a){
            cin >> i;
            if(i>=0){
                sum += i;
            }
            else{
                v.push_back(i);
            }
        }
        sort(v);
        for (ll i = 0; i < v.size() && k>0;i++,k--){
            sum += (-1) * v[i];
        }
        cout << sum << endl;
    }
    return 0;
}
