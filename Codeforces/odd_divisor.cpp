#include <bits/stdc++.h>  
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
using namespace std;
 
void hk(){
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin);
        freopen("../output.txt", "w", stdout);
    #endif
}
 
int main(){
    fastIO;
    hk();
    w(t){
        ll n;
        cin>>n;
        if(ceil(log10(n)/log10(2))==floor(log10(n)/log10(2))){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }    
    return 0;
}