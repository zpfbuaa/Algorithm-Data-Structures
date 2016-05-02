#include <iostream>
#include <cstdio>
#include <limits.h>
using namespace std;
int a[100100], dp[100100];
int main()
{
    int n;
    int num = 1;
    while(~scanf("%d", &n))
    {
        int ans=0;
        for(int i=1; i<=n; i++)
            scanf("%d", &a[i]);
        printf("Case %d: ", num++);
        for(int i=1; i<=n; i++)
            dp[i]=INT_MAX;
        for(int i=1; i<=n; i++)
            (*lower_bound(dp+1, dp+1+n, a[i]))=a[i];
        for(int i=1; i<=n; i++)
            if(dp[i]!=INT_MAX)
                ans=i;
        printf("%d\n", ans);
    }
}
