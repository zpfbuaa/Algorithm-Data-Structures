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

int gcd(int a,int b)
{
    int temp;
    temp=a%b;
    if(temp==0)
        return b;
    else return gcd(b,temp);
}

int lcm(int m,int n)
{
    return m*n/gcd(m,n);
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a,b,x,y,gcds,lcms;
        scanf("%d%d",&a,&b);
        x=a;y=b;
        gcds=gcd(a,b);
        lcms=lcm(x,y);
        for(;n>=3;n--)
        {
            cin>>b;
            y=b;
            a=gcds;
            gcds=gcd(a,b);
            x=lcms;
            lcms=lcm(x,y);
        }
        cout<<gcds<<" "<<lcms<<endl;
    }
}























