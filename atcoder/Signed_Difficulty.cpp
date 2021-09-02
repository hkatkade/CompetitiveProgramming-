#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define M 100001
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t;cin>>t;while(t--)
#define sort(a) sort(a.begin(), a.end());
using namespace std;
int main()
{
    fastIO;
    w(t){
    float x;
    cin >> x;
    int y = x;
    float frac = (x - y)*10;
    // cout << frac << endl;
    if(frac<=2 && frac>=0){
        // cout << "ssdasdas" << endl;
        cout << y << "-" << endl;
    }
    else if(frac>=7 && frac<=9){
        // cout << "asdfasda" << endl;
        cout << y << "+" <<endl;
    }
    else if(frac>=3 && frac<=6){
        cout << y << endl;
    }
    }
    return 0;
}
