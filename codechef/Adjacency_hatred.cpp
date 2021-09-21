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
    w(t){
        ll n;
        cin >> n;
        vector<ll> arr(n, 0);
        for (ll i = 0; i < n;i++){
            cin >> arr[i];
        }
        sort(arr);
        vector<ll> v1;
        vector<ll> v2;
        for (int i = 0; i < n; i++)
            if (arr[i] % 2 == 0)
                v1.push_back(arr[i]);
            else
                v2.push_back(arr[i]);
    
        ll index = 0, i = 0, j = 0;
        bool flag = false;
        if (arr[0] % 2 == 0)
            flag = true;

        while (index < n) {
            if (flag == true) {
                arr[index++] = v1[i++];
                flag = !flag;
            }
            else {
                arr[index++] = v2[j++];
                flag = !flag;
            }
        }
        for (i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
    }
    return 0;
}