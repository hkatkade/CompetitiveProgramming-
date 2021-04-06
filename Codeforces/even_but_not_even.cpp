#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        ll odd = 0,n;
        cin >> n>> s;
        for (int i = 0; i < s.length();i++){
            if((s[i]-'0')%2){
                odd++;
            }
        }
        if(odd<=1){
            cout << -1 << "\n";
            continue;
        }
        int c = 0;
        for (int i = 0; i < s.length();i++){
            if((s[i]-'0')%2){
                cout << s[i];
                c++;
            }
            if(c==2){
                break;
            }
        }
        cout << endl;
    }
    return 0;
}