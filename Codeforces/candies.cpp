#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,k,i,x;
        cin >> n;
        for (i = 2; i < 30;i++)
        {
            x=(pow(2, i - 1) - 1);
            if(n % x == 0){
                cout << n / x << "\n";
                break;
            }
        }
    }
    return 0;
}