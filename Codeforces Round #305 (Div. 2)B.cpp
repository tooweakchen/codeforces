#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;
int n,m,q;
const int maxn=500+10;
int s[maxn][maxn];
int num[maxn];
int main()
{
    while(scanf("%d%d%d",&n,&m,&q)!=EOF)
    {
        memset(num,0,sizeof(num));
        for(int i=1; i<=n; i++)
        {
            int sum=0,max2=0;
            for(int j=1; j<=m; j++)
            {
                scanf("%d",&s[i][j]);
                if(s[i][j]==0)
                {
                    max2=max(max2,sum);
                    sum=0;
                }
                else sum++;

            }
            max2=max(max2,sum);
            num[i]=max2;
        }
        for(int i=0; i<q; i++)
        {
            int max1=0,cnt=0;
            int x,y;
            cin>>x>>y;
            if(s[x][y]==0)
            {
                s[x][y]=1;
            }
            else
            {
                s[x][y]=0;
            }
            int sum1=0;
            for(int j=1; j<=m; j++)
            {
                if(s[x][j]==0)
                {
                    max1=max(max1,cnt);
                    cnt=0;
                }
                else
                {
                    cnt++;
                }
            }
            max1=max(max1,cnt);
            num[x]=max1;
            int max3=0;
            for(int j=1; j<=n; j++)
            {
                max3=max(max3,num[j]);
            }
            cout<<max3<<endl;
        }
    }
    return 0;
}
