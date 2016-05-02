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
#define max_size 1010
int a[max_size][max_size];

using namespace std;

int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        int ans=0;
        for(int i=0;i<=n+1;i++)
            for(int j=0;j<=m+1;j++)
                a[i][j]=9000;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                scanf("%d",&a[i][j]);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if((a[i][j]<a[i-1][j-1])&&(a[i][j]<a[i-1][j])&&(a[i][j]<a[i-1][j+1])&&(a[i][j]<a[i][j-1])&&(a[i][j]<a[i][j+1])&&(a[i][j]<a[i+1][j-1])&&(a[i][j]<a[i+1][j])&&(a[i][j]<a[i+1][j+1]))
                ans++;
            }
        printf("%d\n",ans);
    }
}






















