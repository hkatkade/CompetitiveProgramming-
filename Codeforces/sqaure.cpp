#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        if(a1>b1)
            swap(a1, b1);
        if(a2>b2)
            swap(a2, b2);
        if((a1+a2)==b1 && b1==b2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}