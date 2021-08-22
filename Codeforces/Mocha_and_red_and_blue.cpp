#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main(){
   w(t){
       ll n;
       string s;
       cin >> n >> s;
       ll c = 0;
       for(auto &i:s){
           if(i=='?')
               c++;
       }
       string res = "";
       if(c==n){
           for (int i = 0; i < n;i++){
               if(i%2){
                   res += 'B';
               }
               else{
                   res += 'R';
               }
           }
           cout << res << endl;
       }
       else if(n==1 && s=="?"){
           cout << "R" << endl;
       }
       else{
            for (int i = 0; i < n;i++){
                if(s[i]=='?' && i!=0){
                    if(s[i-1]=='R' || s[i-1]=='B'){
                        while(s[i]=='?'){
                            if(s[i-1]=='R'){
                                s[i] = 'B';
                            }
                            else{
                                s[i] = 'R';
                            }
                            i++;
                        }
                    }
                }
            }
            for (int i = n-1; i >= 0;i--){
                if(s[i]=='?' && i!=n-1){
                    if(s[i+1]=='R' || s[i+1]=='B'){
                        while(s[i]=='?'){
                            if(s[i+1]=='R'){
                                s[i] = 'B';
                            }
                            else{
                                s[i] = 'R';
                            }
                            i--;
                        }
                    }
                }
            }
            cout << s << endl;
        }
   }
    return 0;
}
