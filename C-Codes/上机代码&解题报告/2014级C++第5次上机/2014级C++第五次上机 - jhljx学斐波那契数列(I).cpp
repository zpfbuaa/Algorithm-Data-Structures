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

long long fib(long long n)
{
    if(n==1||n==2)return 1;
    else return fib(n-1)+fib(n-2);
}
int main()
{
    long long n;
    while(~scanf("%lld",&n))
    {
        printf("%lld\n",fib(n));
    }
}






















