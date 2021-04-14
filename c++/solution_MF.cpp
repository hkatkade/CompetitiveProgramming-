#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
void hk(){
    #ifndef ONLINE_JUDGE
    freopen("i1.txt", "r", stdin);
    freopen("o1.txt", "w", stdout);
#endif
}
int main(){
    hk();
    ll t;
    cin >> t;
    while(t--){
        int n, i, c, k;
        cin >> n;
        c = 0, k = 0;
        vector<int> arr(n + 1, 0);
        for (i=1; i<=n; i++)
        {
            if (n % i == 0)
            {
                arr[k] = i;
                k = k + 1;;
                c = c + 1;
            }
        }
 
        c = c - 1;
 
        if (c & 1)
            printf ("%d %d\n",arr[c/2],arr[c/2+1]);
        else
            printf ("%d %d\n",arr[c/2],arr[c/2]);
    }
    return 0;
}