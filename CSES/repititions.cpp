#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s;
    ll len = 1, ans = 1;
    cin >> s;
    int n = s.length();
    for (ll i = 0; i < n-1;i++){
        if(s[i]==s[i+1]){
            len++;
            ans = max(ans, len);
        }
        else{
            len = 1;
        }
    }
    cout << ans << "\n";
    return 0;
}