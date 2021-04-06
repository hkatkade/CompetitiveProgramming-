#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<string> ans;
    sort(s.begin(), s.end());
    do{
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << ans.size() << "\n";
    for(auto &i:ans){
        cout << i << "\n";
    }
    return 0;
}