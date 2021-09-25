#include<bits/stdc++.h>
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
int main()
{
    // hk();
    fastIO;
    w(t){
        string s;
        int n;
        cin >> n >> s;
        int ans = s[n - 1]-'0';
        for (int i = 0; i < n-1;i++){
            if(s[i]!='0')
                ans += (s[i] - '0') + 1;
        }
        cout << ans << "\n";
    }
    return 0;
}