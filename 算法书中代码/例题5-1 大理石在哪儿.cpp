#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <algorithm>

using namespace std;
const int maxn=10010;
int a[maxn];
bool my_find(int flag,int n,int &ans,int a[])
{
    for(int i=1;i<=n;i++)
    {
        if(flag==a[i])
        {
            ans=i;
            return true;
        }
    }
    return false;
}

int main()
{
    int n,m;
    int num=0;
    while(~scanf("%d%d",&n,&m))
    {
        num++;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                }
            }
        }
        for(int i=1;i<=m;i++)
        {
            int flag,ans;
            cin>>flag;
            if(i==1)
            {
                cout<<"CASE# "<<num<<":"<<"\n";
            }
            if(!my_find(flag,n,ans,a))
            {
                cout<<flag<<" not found"<<"\n";
            }
            else
            {
                cout<<flag<<" found at "<<ans<<"\n";
            }
        }
    }
}
