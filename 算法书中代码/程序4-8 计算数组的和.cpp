#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

int sum(int *a,int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=a[i];
    }
    return ans;
}

int main()
{
    int a[]={1,2,3,4};
    printf("%d\n",sum(a,4));
    return 0;
}
