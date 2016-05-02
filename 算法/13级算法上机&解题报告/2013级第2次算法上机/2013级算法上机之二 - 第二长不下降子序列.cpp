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
#define max_size 10010
int a[max_size];
int len[max_size];

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        memset(a,0,sizeof(a));
        memset(len,0,sizeof(len));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int step=0,ans=0;
        for(int i=0;i<n;i++)
        {
            len[i]=1;
            for(int j=0;j<i;j++)
            {
                if(a[j]<=a[i]&&len[j]+1>len[i])
                {
                    len[i]=len[j]+1;
                }
                if(step<=len[i])
                {
                    ans=step;
                    step=len[i];
                }
            }
        }
        printf("%d\n",ans);
    }
}


