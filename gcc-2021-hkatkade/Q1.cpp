#include <iostream>  
#include <cmath>
#define ll long long int
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    fastIO;
    long double n;
    cin >> n;
    ll p1 = ceil(n / 3), p2 = floor(n / 3);
    ll ans = p1 + p2;
    cout << ans << "\n";
    return 0;
}