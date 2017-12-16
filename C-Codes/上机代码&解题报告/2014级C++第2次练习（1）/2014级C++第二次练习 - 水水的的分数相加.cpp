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
int gcd(int a, int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    int n;
    while(~scanf("%d",&n)){
        int a,b,c,d,e,f;
        while(n--){
            scanf("%d%d%d%d",&a,&b,&c,&d);
            e=(a*d)+(b*c);
            f=b*d;
            int temp=gcd(e,f);
            e=e/temp;
            f=f/temp;
            printf("%d %d\n",e,f);
        }
    }
}
