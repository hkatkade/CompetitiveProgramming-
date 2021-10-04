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
    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for (ll i = 0; i<m;i++){
        cin >> b[i];
    }
    ll i = 0, j = 0, ans = 0;
    for (i = 0, j = 0; (i < n || j < m) && maxSum >= 0; ans++)
    {
        if(i<n && j>=m){
            maxSum -= a[i];
            if(maxSum<0){
                break;
            }
            i++;
        }
        else if(j<m && i>=n){
            maxSum -= b[j];
            if(maxSum<0){
                break;
            }
            j++;
        }
        else if(a[i]<b[j]){
            maxSum -= a[i];
            if(maxSum<0){
                break;
            }
            i++;
        }
        else if(b[j]<a[i]){
            maxSum -= b[j];
            if(maxSum<0){
                break;
            }
            j++;
        }
        else if(a[i]==b[j]){
            if(n<m){
                maxSum -= a[i];
                if(maxSum<0){
                    break;
                }
                i++;
            }
            else{
                maxSum -= b[j];
                if(maxSum<0){
                    break;
                }
                j++;
            }
        }
    }
    cout << i << " " << j << endl;
    cout << ans;
    return 0;
}