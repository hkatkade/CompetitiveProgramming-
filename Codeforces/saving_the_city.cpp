#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main()
{
    fastIO;
    w(t){
        ll a, b, count_1=0, first_1=-1, last_1=-1, count_0=0;
        string s;
        cin >> a >> b >> s;
        for (ll i = 0; i < s.length();i++){
            if(s[i]=='1' && count_1==0){
                count_1++;
                first_1 = i;
            }
            if(s[i]=='1'){
                last_1 = i;
            }
        }
        //cout << first_1 << " " << last_1 << "\n";
        if (first_1 == last_1 && first_1==-1){
            cout << 0 << "\n";
            continue;
        }
        ll ans = 0;
        for (ll i = first_1; i <= last_1;i++){
            count_0 = 0;
            while(s[i]=='0'){
                count_0++;
                i++;
            }
            ans += min(count_0 * b, a);
        }
        cout << ans+a << "\n";
    }
    return 0;
}