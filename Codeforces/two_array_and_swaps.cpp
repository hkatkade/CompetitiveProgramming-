#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, i, j;
        cin >> n >> k;
        ll a[n], b[n];
        for (i = 0; i < n;i++)
            cin >> a[i];
        for (i = 0; i < n;i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        for (i = 0; i < n && k>0;i++,k--)
        {
            if(a[i]<b[n-i-1])
                swap(a[i],b[n-i-1]);
        }
        ll sum = 0;
        for (i = 0; i < n;i++)
            sum += a[i];
        cout << sum << endl;
    }
    return 0;
}