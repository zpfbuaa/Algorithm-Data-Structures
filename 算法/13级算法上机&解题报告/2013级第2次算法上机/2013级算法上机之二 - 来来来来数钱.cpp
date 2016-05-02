#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <sstream>
#include <cmath>
#include <string>
#define max_size 25010

using namespace std;
int w[55];
int d[55];
int cash[max_size];

int main()
{
    int n,m,i,j;
    while(~scanf("%d",&n))
    {
        int ans=0;
        m=0;
        for(i=1; i<=n; i++)
        {
            scanf("%d%d",&w[i],&d[i]);
            m+=w[i]*d[i];
        }
        memset(cash,-1,sizeof(cash));
        cash[0]=0;
        for(i=1; i<=n; i++)
        {
            for(j=0; j<=m; j++)
            {
                if(cash[j]>=0)
                    cash[j]=d[i];
                else if(j<w[i]||cash[j-w[i]]<=0)
                    cash[j]=-1;
                else
                    cash[j]=cash[j-w[i]]-1;
            }
        }
        for(i=1; i<=m; i++)
            if(cash[i]>=0)
                ans++;
        printf("%d\n",ans);
    }
}
