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
    hk();
    w(t){
        string s;
        cin >> s;
        for (int i = 0; i < s.length();i++){
            if(i%2==0){
                if (s[i] != 'a'){
                    s[i] = 'a';
                }
                else{
                    s[i] = 'b';
                }
            }
            else{
                if(s[i]!='z'){
                    s[i] = 'z';
                }
                else{
                    s[i] = 'y';
                }
            }
        }
        cout << s << "\n";
    }    
    return 0;
}