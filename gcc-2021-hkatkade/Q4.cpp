#include<iostream>
#include<cmath>
#include<vector>
#include<stack>
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
    ll n;
    cin >> n;
    vector<ll> h(n, 0), left(n, 0), right(n, 0);
    for(auto &i:h){
        cin >> i;
    }
    stack<ll> st;
    for (ll i = 0; i < n;i++){
        if(st.empty()){
            left[i] = 0;
            st.push(i);
        }
        else{
            while(!st.empty() && h[st.top()]<=h[i]){
                st.pop();
            }
            left[i] = st.empty() ? 0 : st.top();
            st.push(i);
        }
    }
    stack<ll> s;
    for (ll i = n-1; i >= 0;i--){
        if(s.empty()){
            right[i] = n - 1;
            s.push(i);
        }
        else{
            while(!s.empty() && h[s.top()]<=h[i]){
                s.pop();
            }
            right[i] = s.empty() ? n-1 : s.top();
            s.push(i);
        }
    }
    for(auto &i:left){
        cout << i << " ";
    }
    cout << endl;
    for(auto &i:right){
        cout << i << " ";
    }
    return 0;
}

