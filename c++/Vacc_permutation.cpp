#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define M 1001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin >> t;while (t--)
//#define sort(a) sort(a.begin(), a.end());
using namespace std;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll a[M], pows[M], c[M][M];
void hk(){
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
    freopen("o.txt", "w", stdout);
#endif  
}
ll power(ll x, ll y)
{
    ll res = 1;
    x = x % MOD;
    if (x == 0)
    {
        return 0;
    }
    while (y > 0)
    {
        if (y % 2 == 1)
        {
            res = (res * x) % MOD;
        }
        y /= 2;
        x = (x * x) % MOD;
    }
    return res;
}
int main()
{
    fastIO;
    memset(a, 0, sizeof(a));
    memset(c, 0, sizeof(c));
    memset(pows, 0, sizeof(pows));
    pows[0] = 1;
    pows[1] = 1;
    for (ll i = 2; i <= 1000; i++)
    {
        pows[i] = (pows[i - 1] * 2) % MOD;
    }
    c[0][0] = 1;
    for (int i = 1; i <= 1000; i++)
    {
        c[i][0] = 1;
        for (int j = 1; j <= i; j++)
        {
            c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % MOD;
        }
    }
    //hk();
    //w(t) 
    {
        ll m, n;
        cin >> n >> m;
        for (ll i = 1; i <= m; i++)
        {
            cin >> a[i];
        }
        sort(a + 1, a + m + 1);
        ll sum = 1;
        ll d = n - m;
        for (int i = 1; i <= m; i++)
        {
            sum = (sum * c[d][a[i] - a[i - 1] - 1]) % MOD;
            d -= a[i] - a[i - 1] - 1;
        }
        for (int i = 2; i <= m; i++)
        {
            sum = (sum * pows[a[i] - a[i - 1] - 1]) % MOD;
        }
        cout << sum << "\n";
    }
    return 0;
}