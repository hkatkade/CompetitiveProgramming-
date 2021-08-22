#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 1000001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int solution(vector<int>& h){
    int n = h.size();
    if(n==0){
        return 0;
    }
    vector<int> left(n, 0), right(n, 0);
    left[0] = h[0];
    right[n - 1] = h[n - 1];
    for (int i = 1; i < n;i++){
        left[i] = max(left[i - 1], h[i]);
    }
    for (int i = n - 1; i >= 0;i--){
        right[i] = max(right[i + 1], h[i]);
    }
    int ans = 0;
    for (int i = 0; i < n;i++){
        ans += min(left[i], right[i]) - h[i];
    }
    return ans;
}
int main()
{
    fastIO;
    ll n;
    cin >> n;
    vector<int> a(n,0);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int ans = solution(a);
    cout << ans << endl;
    return 0;
}