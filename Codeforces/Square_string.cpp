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
 
int main(){
    fastIO;
    hk();
    w(t){
        string s;
        cin >> s;
        int n = s.length();
        if(n%2==1){
            cout << "NO\n";
        }
        else{
            if(s.substr(0,n/2)==s.substr(n/2,n/2)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }    
    return 0;
}