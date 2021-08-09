#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main(){
    w(t){
        ll n;
        cin >> n;
        if(n==1){
            cout << "a\n";
        }
        else{
            string res = string(n / 2, 'a');
            if(n%2){
                res += "bc";
            }
            else{
                res += "b";
            }
            res += string((n / 2) - 1, 'a');
            cout << res << endl;
        }
    }
    return 0;
}
