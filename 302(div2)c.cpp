#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;
const int maxn=500+10;
int a[maxn],dp[maxn][maxn];
int n,m,b,mod;
int main()
{
    while(cin>>n>>m>>b>>mod)
    {
        for(int i=1; i<=n; i++)cin>>a[i];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                for(int k=a[i]; k<=b; k++)
                {
                    dp[j][k]+=dp[j-1][k-a[i]];
                    dp[j][k]%=mod;
                }
            }
        }
        int ans=0;
        for(int i=0; i<=b; i++)
        {
            ans+=dp[m][i];
            ans%=mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
