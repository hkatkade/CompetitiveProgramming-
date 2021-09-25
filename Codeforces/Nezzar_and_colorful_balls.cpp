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
    // hk();
    w(t){
        unordered_map<int, int> m;
        int n;
        cin >> n;
        int x;
        for (int i = 0; i < n;i++){
            cin >> x;
            m[x]++;
        }
        int ans = INT_MIN;
        for(auto &i:m){
            ans = max(ans, i.second);
        }
        cout << ans << endl;
    }    
    return 0;
}