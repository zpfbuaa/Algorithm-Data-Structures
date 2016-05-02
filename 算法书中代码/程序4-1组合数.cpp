#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

long long C(int n,int m)
{
    if(m<n-m)m=n-m;
    long long ans=1;
    for(int i=m+1;i<=n;i++)ans*=i;
    for(int i=1;i<=n-m;i++)ans/=i;
    return ans;
}

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        cout<<C(n,m)<<endl;
    }
}

