#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main()
{
    fastIO;
    ll n;
    cin >> n;   
    // unordered_map<string, string> m;
    unordered_set<string> s;
    
    bool ok = false;
    for (int i = 0; i < n;i++){
        string a,b,c;
        cin >> b >> c;
        a = b + c;
        if(s.find(a)==s.end()){
            s.insert(a);
            // cout << "okasdas" << endl;
        }
        else{
            // cout << "sdfasdaaaaa\n";
            ok = true;
        }
    }
    if(ok){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    return 0;
}
