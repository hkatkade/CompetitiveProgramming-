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
        string s;
        cin >> s;
        ll n = s.length();
        string a = s, b = s;
        for (int i = 0,j=n-1; i < n-1 && j>=1;i++,j--){
            if(a[i]>a[i+1]){
                swap(a[i], a[i + 1]);
            }
            if(a[j]<a[j-1])            
        }
    }
    return 0;
}
