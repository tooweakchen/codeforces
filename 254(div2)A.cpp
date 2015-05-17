/*
  这题虽然是A题,但是我还是想说下,一开始我拿到这个题,
  我的想法是找出各种在边界的情况,然后再找出在里面包围的来,
  但是写到一半的时候,发现有点繁琐,
  于是想了会,才发现根本就是想的方向不对.
  才有以下这种,我觉得最简单的方法了.
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
const int maxn=1000+10;
int n,m;
char s[maxn][maxn];

int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(int i=0; i<n; i++)scanf("%s",s[i]);
        for(int i=0; i<n; i++)
        {
            int ans=0;
            for(int j=0; j<m; j++)
            {
                if(s[i][j]=='.')
                {
                    if(i%2==0)
                    {
                        if(ans%2)s[i][j]='B';
                        else s[i][j]='W';
                    }
                    else
                    {
                        if(ans%2)s[i][j]='W';
                        else s[i][j]='B';
                    }
                }
                ans++;
            }
        }
        for(int i=0; i<n; i++)puts(s[i]);
    }
    return 0;
}
