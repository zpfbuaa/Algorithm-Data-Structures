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
#define max_size 1000010
int a[max_size];

using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int ans=0,start,over,now=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=1;i<=n;i++)
        {
            if(now<0)
            {
                now=a[i];
                start=i;
            }
            else now+=a[i];
            if(now>ans)
            {
                ans=now;
                over=i;
            }
        }
        ans=0;
        for(int i=start;i<=over;i++)
            ans+=a[i];
        printf("%d\n",ans);
    }
}

