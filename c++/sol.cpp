#include<bits/stdc++.h>
 
using namespace std;
const int mod = 1e9 + 7;
const int maxn = 1e3 + 10;
 
long long n,m;
long long  a[maxn], fac[maxn], sum, C[maxn][maxn];
 
int main()
{
    fac[0]=fac[1]=1;
    for(int i = 2; i <= 1000; i++)
        fac[i] = (fac[i-1]*2)%mod;
    C[0][0] = 1;
    for(int i = 1; i <= 1000; i++)
    {
        C[i][0] = 1;
        for(int j = 1; j <= i; j++)
        {
            C[i][j] = (C[i-1][j] + C[i-1][j-1])%mod;
        }
    }
    scanf("%I64d%I64d", &n, &m);
    for(int i = 1; i <= m; i++)
        scanf("%I64d", &a[i]);
    sort(a+1, a+m+1);
    sum = 1;
    int zong  = n-m;
    for(int i = 1; i <= m; i++)
    {
        sum = (sum * C[zong][a[i]-a[i-1]-1])%mod;
        zong -= a[i]-a[i-1]-1;
    }
    for(int i = 2; i <= m; i++)
    {
        sum = (sum * fac[a[i]-a[i-1]-1])%mod;
    }
    printf("%I64d\n", sum);
    return 0;
}