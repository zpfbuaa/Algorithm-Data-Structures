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
    int n,x;
    while(~scanf("%d",&n))
    {
        int  ans=0;
        for(int i=0; i<=n; i++)
            scanf("%d",&a[i]);
        scanf("%d",&x);
        for(int i=n;i>=0;i--)
        {
            ans=a[i]+x*ans;
            ans%=10007;
        }
        printf("%d\n",ans%10007);
    }
}

