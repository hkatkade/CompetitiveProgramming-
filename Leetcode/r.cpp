#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int n = a.size();
        int sum = 0, ans = INT_MAX, j = 0;
        for (int i = 0; i < n;i++){
            sum+=a[i];
            if(sum>=target){
                while(sum>=target){
                    ans = min(ans, i - j + 1);
                    sum -= a[j];
                    j++;  
                }
            }
        }
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};
int main(){
    int n, t;
    cin >> n >>t;
    vector<int> a(n, 0);
    for(auto &i:a){
        cin >> i;
    }
    Solution obj;
    int ans = obj.minSubArrayLen(t, a);
    cout << ans << endl;
    return 0;
}