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
    ll q=1;
    w(t){
        int x, y, ans = 0, c = 0;
        string s;
        cin >> x >> y >> s;
        int n = s.length();
        for (int i = 0; i < n;i++){
            if(s[i]=='?'){
                c++;
            }
        }
        if(c==n || c==n-1){
            cout << "Case #" << q << ": " << ans << "\n";
            q++;
            continue;
        }
        int k;
        for (k = 0; k < n - 1;k++){
            if(s[k]!='?'){
                break;
            }
        }
        if(s[k]==0){
            k++;
        }
        int i = k, j = 0;
        //CJ?CC?
        while(i<n-1){
            if(s[i]=='?'){
                if(s[i-1]!=s[i+1] && s[i+1]!='?'){
                    if(s[i-1]=='J'){
                        ans += y;
                    }
                    else{
                        ans += x;
                    }
                    
                }
                else if(s[i-1]!=s[i+1] && s[i+1]=='?'){
                    j = i + 2;
                    while(s[j]=='?' && j<n){
                        j++;
                    }
                    if(j==n){
                        break;
                    }
                    if(s[i-1]!=s[j]){
                        if(s[i-1]=='J'){
                            ans += y;
                        }
                        else if(s[i-1]=='C'){
                            ans += x;
                        }
                    }
                    i = j;
                }
            }
            i++;
        }
        for (int i = 0; i < n-1;i++){
            string t = s.substr(i, 2);
            if(t=="CJ"){
                ans += x;
            }
            else if(t=="JC"){
                ans += y;
            }
        }
        cout << "Case #" << q << ": " << ans << "\n";
        q++;
    }
    return 0;
}
