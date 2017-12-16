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

bool Prime(long long n)
{
    if(n==1||n==0)return false;
    int temp=pow(n,0.5);
    for(int i=2;i<=temp;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long long n;
    while(~scanf("%lld",&n))
    {
        if(Prime(n))printf("jhljx is good!\n");
        else printf("jhljx is sangxinbingkuang!\n");
    }
}






















