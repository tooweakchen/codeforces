#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
const int maxn=2000+10;
int n,m;
struct node
{
    int pos,val;
    int x,y,z;
} s1[maxn],s2[maxn];
bool cmp(node a,node b)
{
    if(a.val!=b.val)return a.val<b.val;
    else return a.pos<b.pos;
}
int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&s1[i].val);
            s1[i].pos=i;
        }
        sort(s1+1,s1+n+1,cmp);
        for(int i=1; i<=m; i++)
        {
            scanf("%d%d",&s2[i].x,&s2[i].y);
            s2[i].z=0;
        }
        int sum=0;
        for(int i=1; i<=n; i++)
        {
            int cnt=0;
            for(int j=1; j<=m; j++)
            {
                if(!s2[j].z&&(s2[j].x==s1[i].pos||s2[j].y==s1[i].pos))
                {

                    cnt++;
                    s2[j].z=1;
                }
            }
            sum+=cnt*s1[i].val;
        }
        cout<<sum<<endl;
    }
    return 0;
}
