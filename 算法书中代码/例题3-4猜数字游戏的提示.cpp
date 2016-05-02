#include <iostream>
#include <cstdio>
#include <cstring>
#define Maxsize 1010
int a[Maxsize],b[Maxsize];
using namespace std;
int tuichu(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)return 0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(;;)
        {
        int ans1=0,ans2=0;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if(a[i]==b[i])
                ans1++;
        }
        if(tuichu(b,n))break;
        for(int i=1;i<=9;i++)
        {   int k1=0,k2=0;//k1表示在a[n]中1~9的个数,k2表示在b[n]中1~9的个数
            for(int j=0;j<n;j++)
            {
                if(a[j]==i)k1++;
                if(b[j]==i)k2++;
            }
            ans2+=(k1<k2)?k1:k2;
        }
        cout<<"A="<<ans1<<" B="<<ans2-ans1<<endl;
        }
    }
}
