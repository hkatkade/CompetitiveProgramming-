#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string a, b, c;
        bool ans = true;
        cin >> a >> b >> c;
        for (int i = 0; i < a.length();i++)
        {
            if(a[i]==b[i] && a[i]!=c[i]){
                ans = false;
                break;
            }
            else if(c[i]!=b[i] && c[i]!=a[i]){
                ans = false;
                break;
            }
        }
        if(ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}