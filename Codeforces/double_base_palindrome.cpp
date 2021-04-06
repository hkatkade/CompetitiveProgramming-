#include<bits/stdc++.h>
using namespace std;
string to_str(int num,int base)
{
    string result="";
    while(num>0)
    {
        int digit=num%base;
        num=num/base;
        result.insert(0,1,char('0'+digit));
    }
    return result;
}
bool ispal(string s)
{
    string temp=s;
    reverse(temp.begin(),temp.end());
    return temp==s;
}
int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        if(ispal(to_str(i,k)) && ispal(to_str(i,10)))
        {
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}