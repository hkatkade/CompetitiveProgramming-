#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m;
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        if(n==2)
        {
            cout<<m<<endl;
            continue;
        }
        cout << 2 * m << endl;
    }
    return 0;
}