#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s,t;
        char c;
        ll n;
        bool flag = false;
        cin >> n >> s;
        t = s.substr(1, s.length());
        c = s[0];
        for (int i = 1; i < n;i++){
            if(s[i]==c){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "YES\n";
            continue;
        }
        flag = false;
        t = s.substr(0, s.length()-1);
        c = s[n-1];
        for (int i = 0; i < n-1;i++){
            if(s[i]==c){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}