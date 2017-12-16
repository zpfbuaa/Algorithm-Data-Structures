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

int main()
{
    long long n,ans;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n%2==0)ans=n*n/2;
        else ans=((n+1)/2)*((n+1)/2)+((n+1)/2-1)*(n/2);
        printf("%lld\n",ans);
    }
}






















