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
    // right[n - 1] = n - 1;
    for (int i = n - 1; i >= 0;i--){
        if(st.empty()){
            right[i] = i;
            st.push(i);
        }
        else{
            while(!st.empty() && h[st.top()]<=h[i]){
                st.pop();
            }
            right[i] = st.empty() ? i : st.top();
            st.push(i);
        }
    }
    // left[0] = 0;
    stack<ll> s;
    for (int i = 0; i < n ;i++){
        if(s.empty()){
            left[i] = i;
            s.push(i);
        }
        else{
            while(!s.empty() && h[s.top()]<=h[i]){
                s.pop();
            }
            left[i] = s.empty() ? i : s.top();
            s.push(i);
        }
    }
    for(auto &i:left){
        cout << i << " ";
    }
    cout << endl;
    for (auto &i : right)
    {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}

