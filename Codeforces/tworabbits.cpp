#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        long double k,x, y, a, b;
        cin >> x >> y >> a >> b;
        k = (y - x) / (a + b);
        if(ceil(k)==floor(k) && k>0)
            cout << int(k) << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}