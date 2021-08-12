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
    w(t){
        string s;
        ll n;
        cin >> n;
        cin >> s;
        string res = "";
        for (int k = 0; k < n / 4;k++){
            ll i = 0;
            // initial mid = i(9)
            ll start = 0, end = 15;
            ll mid = mid = start + ((end - start) / 2);
            for (int i = 0; i < 4;i++){
                ll ind = 4 * k + i;
                if(s[ind]=='0'){
                    end = mid-1;
                    // end = end - mid;
                }
                else if(s[ind]=='1'){
                    start = mid + 1;
                    // start = start + mid;
                }
                // mid /= 2;
                mid = start + ((end - start) / 2);
                // cout << "start: " << start << endl;
                // cout << "end: " << end << endl;
                // cout << "mid: " << mid << endl;
            }
            res += ('a' + start);
        }
        cout << res << endl;
    }
    return 0;
}
