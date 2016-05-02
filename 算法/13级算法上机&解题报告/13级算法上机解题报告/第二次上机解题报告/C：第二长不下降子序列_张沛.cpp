#include<iostream>
using namespace std;
int f(int a,int b)
{
    if(a>b)return a;
    return b;
}
int x[10005],dp[10005],c[10005];
int main()
{
    int n,s;
    while(cin>>n)
    {
        s=0;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            dp[i]=1;
            c[i]=0;
        }
        c[0]=2;c[1]=1;c[n]=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<i;j++)
                if(x[i]>=x[j])
                {
                    c[dp[j]+1]++;
                    dp[i]=f(dp[i],dp[j]+1);
                }
        for(int i=n;i>=0;i--)
        {
            s+=c[i];
            if(s>1)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
}
