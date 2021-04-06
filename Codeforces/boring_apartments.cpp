#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,len=0,num=0;
        cin >> n;
        x = n;
        num = n % 10;
        while(x>0){
            x /= 10;
            len++;
        }
        int ans = (num-1) * 10 + (len*(len + 1) / 2);
        cout << ans << "\n";
    }
    return 0;
}