#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x,y;
        bool flag = true;
        cin >> n >> k >> x >> y;
        for (int i = 0; i < n;i++){
            if((x+k*i)%n==y){
                cout << "YES\n";
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "NO\n";
    }
    return 0;
}