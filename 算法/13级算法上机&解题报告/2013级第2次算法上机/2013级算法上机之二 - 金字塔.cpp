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
#define max_size 110
int w[max_size][max_size];

using namespace std;

void work(int n)
{
    while(--n)
    {
        int i=n;
        while(i--)
        {
            w[n-1][i]+=max(w[n][i],w[n][i+1]);
        }
    }
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                scanf("%d",&w[i][j]);
            }
        }
        work(n);
        printf("%d\n",w[0][0]);
    }
}
