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

long long work(long long n)
{
    long long ans=0;
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
            ans++;
        }
        else if(n%2==1)
        {
            n=3*n+1;
            ans++;
        }
    }
    return ans;
}
int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF)
    {
        printf("%lld\n",work(n));
    }
}






















