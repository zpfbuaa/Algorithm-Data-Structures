#include <iostream>
#include <cstdio>
#include <cstring>
#define Maxsize 1010
int a[Maxsize];
using namespace std;

int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(a,0,sizeof(a));
        for(int i=1;i<=k;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(j%i==0&&a[j]==0)
                    a[j]=1;
                else if(j%i==0&&a[j]==1)
                    a[j]=0;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1)
                cout<<i<<" ";
        }
        cout<<endl;
    }
}
