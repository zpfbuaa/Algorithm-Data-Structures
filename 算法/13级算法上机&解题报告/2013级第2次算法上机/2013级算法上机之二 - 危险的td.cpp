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
#define max_size 100010
long long fib[max_size];

using namespace std;

int main()
{
    const long long flag=1e9+7;
    fib[0]=1;
    fib[1]=2;
    for(int i=2; i<max_size; i++)
    {
        fib[i]=(fib[i-1]+fib[i-2])%flag;
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%lld\n",fib[n]);
    }
}

