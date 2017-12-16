#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        long long f1=0,f2=1;
        int i;
        for(i=0;i<n;i++)
        {
            f1=(f1%10007+f2%10007);
            f2=(f2%10007+f1%10007);
        }
        printf("%lld\n",f1);
    }
}
