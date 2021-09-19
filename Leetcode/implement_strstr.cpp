#define ll long long int
const int N = 1e5 + 7, MOD = 1e9 + 7;
int p = 31;
class Solution {
public:
    int strStr(string t, string s) {
        vector<ll> powers(N);
        powers[0]=1;
        int T = t.size(), S = s.size();
        vector<ll> hash(T + 1, 0);
        powers[0] = 1;
        for (ll i = 1; i < N;i++){
            powers[i] = (powers[i - 1] * p) % MOD;
        }
        for (ll i = 0; i < T; i++){
            hash[i + 1] = (hash[i] + (t[i] - 'a' + 1) * powers[i]) % MOD;
        }
        ll h_s = 0;
        for (ll i = 0; i < S;i++){
            h_s = (h_s + (s[i] - 'a' + 1)*powers[i]) % MOD;
        }
        ll ans=0;
        for (ll i = 0; i + S - 1 < T;i++){
            ll curr_h = (hash[i + S] - hash[i] + MOD) % MOD;
            if(curr_h==(h_s*powers[i])%MOD){
                return i;
            }
        }
        return -1;
    }
};