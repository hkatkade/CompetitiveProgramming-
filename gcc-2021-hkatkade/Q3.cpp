#include <bits/stdc++.h>  
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
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
    ll n, m, maxSum;
    cin >> n >> m >> maxSum;
    vector<int> a(n, 0), b(m, 0);
    for(auto &i:a){
        cin >> i;
    }
    for(auto &i:b){
        cin >> i;
    }
    ll i = 0, j = 0, ans = 0;
    while(i<n || j<m){
        if(a[i]<b[j] && i<n){
            maxSum -= a[i];
            i++;
        }
        else if(b[j]<a[i] && j<m){
            maxSum -= b[j];
            j++;
        }
        else if(a[i]==b[j] && i<n && j<m){
            if(n<m){
                maxSum -= a[i];
            }
            else{
                maxSum -= b[j];
            }
        }
        else if(i<n && j>=m){
            maxSum -= a[i];
            i++;
        }
        else if(j<m && i>=m){
            maxSum -= b[j];
            j++;
        }
        if(maxSum<0){
            break;
        }
        ans++;
    }
    cout << ans << "\n";
    return 0;
}