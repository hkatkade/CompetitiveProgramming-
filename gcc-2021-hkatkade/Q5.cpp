#include<iostream>
#include<cmath>
#include<vector>
#include<stack>
#include <limits.h>
#include <stdio.h>
#define ll long long int 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
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
    string s;
    cin >> s;
    bool ok = false;
    ll maxi=0,maxo = INT_MIN, maxe = INT_MIN, len = 0;
    for (ll i = 0; i < s.length();i++){
        while(s[i]=='0'){
            len++;
            i++;
        }
        if(len%2){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << 'A';
    }
    else{
        cout << 'B';
    }
    
    return 0;
}

