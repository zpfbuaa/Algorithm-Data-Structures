#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#define Maxsize 1010
using namespace std;

int a[Maxsize];

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        memset(a,0,sizeof(a));
        int ans=0;
        a[0]=n;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        int total=1,deep=1;
        int i;
        while(deep<n)
        {
            int c=0;
            for(i=deep; i<deep+total; i++)
            {
                if(a[i]>0)
                c++;
            }
            if(c==total)
                ans++;
            deep+=total;
            total*=2;
        }
        printf("%d\n",ans);
    }
}


