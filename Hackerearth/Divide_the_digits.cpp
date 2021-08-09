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
        cin >> n;
        vector<int> dig;
        while(n>0){
            dig.push_back(n % 10);
            n /= 10;
        }
        sort(dig);
        int f = 0, s = 0;
        for (int i = 0; i < dig.size();i++){
            if(i%2){
                f = f * 10 + dig[i];
            }
            else{
                s = s * 10 + dig[i];
            }
        }
        cout << f + s << endl;
    }
    return 0;
}
