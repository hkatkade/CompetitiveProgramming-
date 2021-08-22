#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main(){
    vector<int> dp;
    for (int i = 1; i <= 10000;i++){
        if(i%3!=0 && i%10!=3){
            dp.push_back(i);
        }
    }
    w(t){
        int k;
        cin >> k;
        cout << dp[k - 1] << "\n";
    }
    return 0;
}
