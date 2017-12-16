#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int k,a,b;
        scanf("%d%d%d",&k,&a,&b);
        int TotalHigh=a+b,ans1=0,ans2=0;
        int i,height;
        for(i=1;i<=k;i++)
        {
            scanf("%d",&height);
            if(height<=TotalHigh)
            {
                ans1++;
                if(height>a)
                    ans2++;
            }
        }
        printf("%d %d\n",ans1,ans2);
    }
}
