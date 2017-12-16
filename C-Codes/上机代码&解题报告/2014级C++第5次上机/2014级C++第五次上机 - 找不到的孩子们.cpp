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

long long work(long long a,long long b)
{
    long long ans=0;
    if(a==0&&b==0)return 1;
    else if(a==0&&b!=0)return 2;
    else if(b==0&&a!=0)return 2;
    else if(a==b)return 2;
    else
    {
        while(a!=b)
        {
            if(a>b)
            {
                if(a%b!=0)
                {
                    ans+=a/b;
                    a=a%b;
                }
                else
                {
                    ans+=a/b-1;
                    a=b;
                }
            }
            else
            {
                if(b%a!=0)
                {
                    ans+=b/a;
                    b=b%a;
                }
                else
                {
                    ans+=b/a-1;
                    b=a;
                }
            }
        }
        return ans+2;
    }
}
int main()
{
    long long a,b;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        printf("%lld\n",work(a,b));
    }
}

