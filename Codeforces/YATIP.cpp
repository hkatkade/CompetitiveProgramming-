#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b, diff=0,moves=0;
        cin >> a >> b;
        if(a==b){
            cout << 0 << "\n";
            continue;
        }
        diff = abs(b - a);
        moves = (diff - (diff % 10)) / 10;
        if(diff%10==0)
            cout << moves << endl;
        else
            cout << moves + 1 << endl;
    }
    return 0;
}