#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n; i++){
            if(s[i]=='A' && s[i+1]=='P'){
                t++;
                s[i + 1] = 'A';
            }
        }
        cout << t << "\n";
    }
    return 0;
}
