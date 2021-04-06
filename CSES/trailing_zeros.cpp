#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
int main()
{
    ll n,c=0;
    cin >> n;
    while(n){
        n /= 5;
        c+=n;
    }
    cout << c << "\n";
    return 0;
}