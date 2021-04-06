#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    //ll t;
    //cin >> t;
    //while(t--)
    {
        ll a[4];
        for (int i = 0; i < 4;i++){
            cin >> a[i];
        }
        sort(a, a + 4);
        ll sum = a[3];
        for (int i = 0; i < 3; i++){
            cout << sum - a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}