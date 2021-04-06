#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,temp,len=0,dig,c=0;
        cin >> n;
        temp = n;
        while(temp>0)
        {
            dig = temp % 10;
            if(dig!=0)
                c++;
            temp /= 10;
        }
        cout << c << endl;
        while(n>0)
        {
            dig = n % 10;
            if(dig!=0){
                cout << dig * pow(10, len)<<" ";
            }
            n/=10;
            len++;
        }
        cout<<endl;
    }
    return 0;
}