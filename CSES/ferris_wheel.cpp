#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, x, ans=0;
    cin >> n >> x ;
    vector<ll> a(n, 0);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll i = 0, j = n-1, wt=0;
    while (i<j){
        wt = a[i] + a[j];
        if(wt<=x){
            ans++;
            j--;
            i++;
            wt = 0;
        }
        else if(wt>x){
            if(a[i]>a[j]){
                i++;
                ans++;
            }
            else{
                j--;
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}