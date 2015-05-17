#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int sum,limit;
const int maxn=1e5+10;
int a[maxn];

int lowbit(int x)
{
    return x&-x;
}

int main()
{
    while(scanf("%d%d",&sum,&limit)!=EOF)
    {
        int cnt=0,flag=0;
        int ant=0;
        for(int i=limit;i>=0; i--)
        {
            int num=lowbit(i);
            if(sum>=num)
            {
                a[ant++]=i;
                sum-=num;
            }
            if(sum==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            puts("-1");
        }
        else
        {
            cout<<ant<<endl;
            for(int i=0; i<ant; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
