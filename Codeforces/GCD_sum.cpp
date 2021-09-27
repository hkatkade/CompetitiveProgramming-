#include <bits/stdc++.h>  
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
 
void hk(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
}
int gcd_sum(ll n){
    ll temp = n, sum = 0;
    while(temp>0){
        sum += temp % 10;
        temp /= 10;
    }
    ll gcd = __gcd(sum, n);
    return gcd;
}
int main(){
    fastIO;
    hk();
    w(t){
        ll n;
        cin >> n;
        if(gcd_sum(n)!=1){
            cout << n << endl;
        }
        else if(gcd_sum(n+1)!=1){
            cout << n + 1 << endl;
        }
        else if(gcd_sum(n+2)!=1){
            cout << n + 2 << endl;
        }
    }    
    return 0;
}