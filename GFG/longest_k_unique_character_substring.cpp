#include<bits/stdc++.h>
using namespace std;
int longestKSubstr(string s, int k) {

    unordered_map<char, int> m;
    int n = s.length(), j = 0, ans = -1;
    for (int i = 0; i < n;i++){
        m[s[i]]++;    
        if(m.size()==k){
            ans = max(ans, (i - j + 1));
        }
        else if(m.size()>k){
            while()
        }
    }

}
int main(){
    string s;
    int k;
    cin >> s >> k;
    int ans = longestKSubstr(s, k);
    cout << ans << endl;
    return 0;
}