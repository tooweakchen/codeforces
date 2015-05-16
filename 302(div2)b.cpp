#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n,k;
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        int num;
        num=(n*n+1)/2;
        if(num<k)
        {
            puts("NO");
            continue;
        }
        int flag=0;
        int sum=0;
        puts("YES");
        if(k!=0)
        {
            flag=0;
        }
        else if(k==0)
        {
            flag=1;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if((i+j)%2==0&&flag==0)
                {
                    cout<<"L";
                    sum++;
                    if(sum==k)
                    {
                        flag=1;
                    }
                }
                else
                {
                    cout<<"S";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
