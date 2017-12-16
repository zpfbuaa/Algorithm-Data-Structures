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
double s[max_size];
using namespace std;

int main()
{
    long long x0,y0,z0,x,y,z,n,k,m,i;
    while(scanf("%lld%lld%lld%lld",&x0,&y0,&z0,&n)!=EOF)
    {
        m=0;
        s[m]=0;
        for(i=1;i<=n;i++)
        {
            scanf("%lld%lld%lld",&x,&y,&z);
            s[i]=sqrt(pow(x-x0,2)+pow(y-y0,2)+pow(z-z0,2));
            if(s[i]>s[m])
            {
                m=i;
            }
        }
        scanf("%lld",&k);
        double ans=2*s[m]*k;
        cout<<m<<" "<<fixed<<setprecision(6)<<ans<<endl;
    }
}






















