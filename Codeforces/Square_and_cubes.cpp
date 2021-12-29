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
        int n;
        cin >> n;
        set<int> s;
        for (int i = 1; i * i <= n;i++){
            s.insert(i * i);
        }
        for (int i = 1; i * i * i <= n;i++){
            s.insert(i * i * i);
        }
        cout << s.size() << "\n";
    }    
    return 0;
}