#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,sum=0;
    cin >> n;
    ll a;
    for (int i = 0; i < n-1;i++){
        cin >> a;
        sum += a;
    }
    ll o_sum = (n * (n + 1)) / 2;
    cout << (o_sum-sum) << endl;
    return 0;
}