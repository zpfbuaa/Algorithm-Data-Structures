#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MIN INT_MIN

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int k,i,ans=MIN;
        scanf("%d",&k);
        for(i=1;i<=k;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            if(a*b>ans)
                ans=a*b;
        }
        printf("%d\n",ans);
    }
}
