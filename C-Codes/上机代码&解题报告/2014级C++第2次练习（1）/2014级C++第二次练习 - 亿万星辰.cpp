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
double d[max_size];

using namespace std;

int main()
{
    int t,x0,y0,z0,n,x,y,z,i;
    scanf("%d",&t);
    while(t--)
    {
        double ans=0,flag=0;
        scanf("%d%d%d%d",&x0,&y0,&z0,&n);
        memset(d,0,sizeof(d));
        for(i=1;i<=n;i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            d[i]=sqrt(pow(x-x0,2)+pow(y-y0,2)+pow(z-z0,2));
            ans+=d[i];
            flag+=pow(d[i],2);
        }
        ans=ans/n;
        flag=flag/n;
        cout<<fixed<<setprecision(2)<<ans<<" "<<abs(flag-pow(ans,2))<<endl;
    }
}






















