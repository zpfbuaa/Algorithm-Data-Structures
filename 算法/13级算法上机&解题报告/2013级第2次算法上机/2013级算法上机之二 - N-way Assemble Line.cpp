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

using namespace std;
int p[101][101];
int t[101][101];

int work(int n,int m)
{
    int dist[101][101];
    int i,j,k,r=1e9;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        dist[i][j]=1e9;
    for(i=1;i<=n;i++)
        dist[i][1]=p[i][1];
    for(i=2;i<=m;i++)
        for(j=1;j<=m;j++)
            for(k=1;k<=n;k++)
                dist[j][i]=min(dist[j][i],dist[k][i-1]+p[j][i]+t[k][j]);
    for(i=1;i<=n;i++)
        r=min(r,dist[i][m]);
    return r;
}

int main()
{
    int T,n,m,i,j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d",&n,&m);
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
                scanf("%d",&p[i][j]);
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                scanf("%d",&t[i][j]);
        printf("%d\n",work(n,m));
    }
}
