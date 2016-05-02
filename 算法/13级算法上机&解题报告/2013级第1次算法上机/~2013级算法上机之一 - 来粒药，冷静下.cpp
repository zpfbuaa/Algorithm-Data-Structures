#include <cstdio>
#include <cstring>
#define max_size 100010
long long a[max_size];

using namespace std;

int main()
{
    int n,p,q,l,r,x;
    while(~scanf("%d%d",&n,&p))
    {
        long long ans=0;
        memset(a,0,sizeof(a));
        for(int i=1;i<=p;i++)
        {
            scanf("%d%d%d",&l,&r,&x);
            for(int j=l;j<=r;j++)
                a[j]+=x;
        }
        scanf("%d",&q);
        for(int i=1;i<=q;i++)
        {
            scanf("%d%d",&l,&r);
            for(int j=l;j<=r;j++)
            {
                ans+=a[j];
            }
            printf("%lld\n",ans);
            ans=0;
        }
    }
}
