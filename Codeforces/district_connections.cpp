#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n, 0);
        for(auto &i:a){
            cin >> i;
        }
        vector<vector<ll>> ans;
        ll index = -1;
        for (int i = 1; i < n;i++){
            if(a[i]!=a[0]){
                index = i;
                ans.push_back({1,i+1});
            }
        }
        if(ans.empty()){
            cout << "NO\n";
            continue;
        }
        for (int i = 1; i < n;i++){
            if(a[0]==a[i]){
                ans.push_back({index + 1, i + 1});
            }
        }
        cout<<"YES\n";
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<2;j++)
            cout << ans[i][j] << " " ;
        cout<<"\n";
        }
        
    }
    return 0;
}