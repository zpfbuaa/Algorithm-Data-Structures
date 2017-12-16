#include<bits/stdc++.h>
#define inf 0x7fffffff
using namespace std;
typedef long long LL;

int k,n;
int dp[33],pre[33];
struct node
{
    int an[13];
    int id;
    friend bool operator < (node a,node b)
    {
        for (int i=0 ;i<n ;i++)
        {
            if (a.an[i] != b.an[i]) return a.an[i] <  b.an[i];
        }
    }
}arr[33];

void printOut(int u)
{
    if (pre[u]!=-1) printOut(pre[u]);
    if (pre[u]==-1) printf("%d",arr[u].id+1 );
    else printf(" %d",arr[u].id+1 );
}

int main()
{
    while (scanf("%d%d",&k,&n)!=EOF)
    {
        memset(dp,0,sizeof(dp));
        memset(pre,-1,sizeof(pre));
        for (int i=0 ;i<k ;i++)
        {
            for (int j=0 ;j<n ;j++)
                scanf("%d",&arr[i].an[j]);
            arr[i].id=i;
            sort(arr[i].an,arr[i].an+n);
        }
        sort(arr,arr+k);
        for (int i=0 ;i<k ;i++)
        {
            int temp=0;
            for (int j=0 ;j<i ;j++)
            {
                int flag=0;
                for (int u=0 ;u<n ;u++)
                    if (arr[i].an[u]<=arr[j].an[u]) {flag=1;break; }
                if (!flag && dp[j]>temp)
                {
                    temp=dp[j];
                    pre[i]=j;
                }
            }
            dp[i]=temp+1;
        }
        int maxlen=-1,num=0;
        for (int i=0 ;i<k ;i++)
        {
            if (dp[i]>maxlen)
            {
                maxlen=dp[i];
                num=i;
            }
        }
        printf("%d\n",maxlen);
        printOut(num);
        printf("\n");
    }
    return 0;
}
