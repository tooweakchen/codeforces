#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
string s;
int k;

int main()
{
    while(cin>>s)
    {
        cin>>k;
        int len=s.size();
        if(len%k)
        {
            puts("NO");
        }
        else
        {
            int flag=0;
            int num=len/k;
            for(int i=0; i<len; )
            {
                int pos=i;
                for(int j=i+num-1; ;)
                {
                    if(s[i]!=s[j])
                    {
                        //cout<<" i= "<<i <<" j= "<<j<<endl;
                        //cout<<"$$$$$$$$$$$"<<endl;
                        flag=1;
                        break;
                    }
                   i++;
                   j--;
                   if(i==j||j<i)break;
                   //cout<<"#######3"<<endl;
                }
                i=pos+num;
                if(flag)
                {
                    break;
                }
                //cout<<" i= "<<i<<endl;
            }
            if(flag)
            {
                puts("NO");
            }
            else
            {
                puts("YES");
            }
        }
    }
    return 0;
}
