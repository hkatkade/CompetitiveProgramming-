#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k,sum=0;
        cin >> n >> k;
        vector<ll> a(n, 0);
        for(auto &i:a){
            cin >> i;
        }
        sort(a.begin(), a.end());
        for (int i = n - 2; i >= 0 && k>0;i--,k--){
            sum += a[i];
        }
        cout << sum + a[n-1] << endl;
    }
    return 0;
}